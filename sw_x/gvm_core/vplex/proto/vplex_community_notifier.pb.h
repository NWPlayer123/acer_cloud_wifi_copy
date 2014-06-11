// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vplex_community_notifier.proto

#ifndef PROTOBUF_vplex_5fcommunity_5fnotifier_2eproto__INCLUDED
#define PROTOBUF_vplex_5fcommunity_5fnotifier_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace vplex {
namespace community {
namespace notifier {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_vplex_5fcommunity_5fnotifier_2eproto();
void protobuf_AssignDesc_vplex_5fcommunity_5fnotifier_2eproto();
void protobuf_ShutdownFile_vplex_5fcommunity_5fnotifier_2eproto();

class ConnectionId;

// ===================================================================

class ConnectionId : public ::google::protobuf::Message {
 public:
  ConnectionId();
  virtual ~ConnectionId();
  
  ConnectionId(const ConnectionId& from);
  
  inline ConnectionId& operator=(const ConnectionId& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ConnectionId& default_instance();
  
  void Swap(ConnectionId* other);
  
  // implements Message ----------------------------------------------
  
  ConnectionId* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectionId& from);
  void MergeFrom(const ConnectionId& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required fixed64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint64 id() const;
  inline void set_id(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:vplex.community.notifier.ConnectionId)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_vplex_5fcommunity_5fnotifier_2eproto();
  friend void protobuf_AssignDesc_vplex_5fcommunity_5fnotifier_2eproto();
  friend void protobuf_ShutdownFile_vplex_5fcommunity_5fnotifier_2eproto();
  
  void InitAsDefaultInstance();
  static ConnectionId* default_instance_;
};
// ===================================================================


// ===================================================================

// ConnectionId

// required fixed64 id = 1;
inline bool ConnectionId::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ConnectionId::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ConnectionId::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ConnectionId::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::uint64 ConnectionId::id() const {
  return id_;
}
inline void ConnectionId::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace notifier
}  // namespace community
}  // namespace vplex

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_vplex_5fcommunity_5fnotifier_2eproto__INCLUDED