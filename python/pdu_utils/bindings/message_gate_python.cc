/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(message_gate.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(a29925207553a22f30c3b30f0f09acd1)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/pdu_utils/message_gate.h>
// pydoc.h is automatically generated in the build directory
#include <message_gate_pydoc.h>

void bind_message_gate(py::module& m)
{

    using message_gate = ::gr::pdu_utils::message_gate;


    py::class_<message_gate, gr::block, gr::basic_block, std::shared_ptr<message_gate>>(
        m, "message_gate", D(message_gate))

        .def(py::init(&message_gate::make), py::arg("enabled"), D(message_gate, make))


        .def("reset", &message_gate::reset, D(message_gate, reset))


        .def("get_n_passed", &message_gate::get_n_passed, D(message_gate, get_n_passed))


        .def(
            "get_n_blocked", &message_gate::get_n_blocked, D(message_gate, get_n_blocked))


        .def("get_enabled", &message_gate::get_enabled, D(message_gate, get_enabled))


        .def("set_enabled",
             &message_gate::set_enabled,
             py::arg("enabled"),
             D(message_gate, set_enabled))

        ;
}