//============================================================================
// Mini Spin-X Library
//
// Copyright (c) 2022, Jarkko Lempiainen
// All rights reserved.
//============================================================================

#include "sxp_src/sxp_pch.h"
#include "str.h"
#include "utils.h"
using namespace pfc;
//----------------------------------------------------------------------------


//============================================================================
// heap_str
//============================================================================
void heap_str::swap(heap_str &str_)
{
  // swap string contents
  pfc::swap(m_data, str_.m_data);
  pfc::swap(m_size, str_.m_size);
  pfc::swap(m_capacity, str_.m_capacity);
}
//----------------------------------------------------------------------------


//============================================================================
// const_pstr
//============================================================================
void const_pstr::swap(const_pstr &str_)
{
  pfc::swap(m_size, str_.m_size);
  pfc::swap(m_data, str_.m_data);
}
//----------------------------------------------------------------------------


//============================================================================
// pstr
//============================================================================
void pstr::swap(pstr &str_)
{
  // swap string contents
  pfc::swap(m_size, str_.m_size);
  pfc::swap(m_capacity, str_.m_capacity);
  pfc::swap(m_data, str_.m_data);
}
//----------------------------------------------------------------------------
