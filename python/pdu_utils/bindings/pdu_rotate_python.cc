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
/* BINDTOOL_HEADER_FILE(pdu_rotate.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(4d849ae264fd784fe35c97105117136d)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/pdu_utils/pdu_rotate.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_rotate_pydoc.h>

void bind_pdu_rotate(py::module& m)
{

    using pdu_rotate = ::gr::pdu_utils::pdu_rotate;


    py::class_<pdu_rotate, gr::block, gr::basic_block, std::shared_ptr<pdu_rotate>>(
        m, "pdu_rotate", D(pdu_rotate))

        .def(py::init(&pdu_rotate::make), py::arg("phase_inc"), D(pdu_rotate, make))


        .def("set_phase_inc",
             &pdu_rotate::set_phase_inc,
             py::arg("phase_inc"),
             D(pdu_rotate, set_phase_inc))

        ;
}