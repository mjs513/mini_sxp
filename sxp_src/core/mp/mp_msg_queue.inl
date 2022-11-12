//============================================================================
// Mini Spin-X Library
//
// Copyright (c) 2022, Jarkko Lempiainen
// All rights reserved.
//============================================================================


//============================================================================
// message_base
//============================================================================
message_base::message_base()
{
  m_next=0;
}
//----------------------------------------------------------------------------


//============================================================================
// mp_message_queue
//============================================================================
template<class T>
void mp_message_queue::add_message(const T &msg_)
{
  // construct 
  T *msg=(T*)m_allocator.alloc(sizeof(T), meta_alignof<T>::res);
  PFC_PNEW(msg)T(msg_);
  m_messages.push(*msg);
}
//----------------------------------------------------------------------------
