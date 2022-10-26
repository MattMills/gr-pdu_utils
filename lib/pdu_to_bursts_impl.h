/* -*- c++ -*- */
/*
 * Copyright 2018-2021 National Technology & Engineering Solutions of Sandia, LLC
 * (NTESS). Under the terms of Contract DE-NA0003525 with NTESS, the U.S. Government
 * retains certain rights in this software.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_PDU_UTILS_PDU_TO_BURSTS_IMPL_H
#define INCLUDED_PDU_UTILS_PDU_TO_BURSTS_IMPL_H

#include <gnuradio/pdu_utils/constants.h>
#include <gnuradio/pdu_utils/pdu_to_bursts.h>

namespace gr {
namespace pdu_utils {

template <class T>
class pdu_to_bursts_impl : public pdu_to_bursts<T>
{
private:
    pmt::pmt_t d_msg_port_out;
    bool d_early_burst_err;
    bool d_drop_early_bursts;
    bool d_tag_sob;
    int d_type;
    uint32_t d_itemsize;
    uint32_t d_max_queue_size;
    uint32_t d_drop_ctr;
    pmt::pmt_t d_time_tag;
    std::list<pmt::pmt_t> d_pdu_queue;

    std::vector<T> d_data;

    uint32_t queue_data(void);
    void store_pdu(pmt::pmt_t pdu);

public:
    pdu_to_bursts_impl(uint32_t early_burst_behavior, uint32_t max_queue_size = 64);

    ~pdu_to_bursts_impl() override;

    void set_max_queue_size(uint32_t size) override { d_max_queue_size = size; }

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items) override;
};

} // namespace pdu_utils
} // namespace gr

#endif /* INCLUDED_PDU_UTILS_PDU_TO_BURSTS_IMPL_H */
