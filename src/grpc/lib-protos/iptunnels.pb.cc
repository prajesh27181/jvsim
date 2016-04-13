// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: iptunnels.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "iptunnels.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* IpTunnelStats_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  IpTunnelStats_reflection_ = NULL;
const ::google::protobuf::Descriptor* IpTunnelStatsRecord_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  IpTunnelStatsRecord_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_iptunnels_2eproto() {
  protobuf_AddDesc_iptunnels_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "iptunnels.proto");
  GOOGLE_CHECK(file != NULL);
  IpTunnelStats_descriptor_ = file->message_type(0);
  static const int IpTunnelStats_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStats, iptunnel_stats_records_),
  };
  IpTunnelStats_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      IpTunnelStats_descriptor_,
      IpTunnelStats::default_instance_,
      IpTunnelStats_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStats, _has_bits_[0]),
      -1,
      -1,
      sizeof(IpTunnelStats),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStats, _internal_metadata_),
      -1);
  IpTunnelStatsRecord_descriptor_ = file->message_type(1);
  static const int IpTunnelStatsRecord_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStatsRecord, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStatsRecord, packets_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStatsRecord, bytes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStatsRecord, rpf_failed_packets_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStatsRecord, rpf_failed_bytes_),
  };
  IpTunnelStatsRecord_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      IpTunnelStatsRecord_descriptor_,
      IpTunnelStatsRecord::default_instance_,
      IpTunnelStatsRecord_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStatsRecord, _has_bits_[0]),
      -1,
      -1,
      sizeof(IpTunnelStatsRecord),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpTunnelStatsRecord, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_iptunnels_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      IpTunnelStats_descriptor_, &IpTunnelStats::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      IpTunnelStatsRecord_descriptor_, &IpTunnelStatsRecord::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_iptunnels_2eproto() {
  delete IpTunnelStats::default_instance_;
  delete IpTunnelStats_reflection_;
  delete IpTunnelStatsRecord::default_instance_;
  delete IpTunnelStatsRecord_reflection_;
}

void protobuf_AddDesc_iptunnels_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_jvision_5ftop_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017iptunnels.proto\032\021jvision_top.proto\"E\n\r"
    "IpTunnelStats\0224\n\026iptunnel_stats_records\030"
    "\001 \003(\0132\024.IpTunnelStatsRecord\"\234\001\n\023IpTunnel"
    "StatsRecord\022\023\n\004name\030\001 \002(\tB\005\202@\002\010\001\022\026\n\007pack"
    "ets\030\002 \001(\004B\005\202@\002\030\001\022\024\n\005bytes\030\003 \001(\004B\005\202@\002\030\001\022!"
    "\n\022rpf_failed_packets\030\004 \001(\004B\005\202@\002\030\001\022\037\n\020rpf"
    "_failed_bytes\030\005 \001(\004B\005\202@\002\030\001:N\n\035jnpr_iptun"
    "nels_statistics_ext\022\027.JuniperNetworksSen"
    "sors\030\016 \001(\0132\016.IpTunnelStats", 346);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "iptunnels.proto", &protobuf_RegisterTypes);
  IpTunnelStats::default_instance_ = new IpTunnelStats();
  IpTunnelStatsRecord::default_instance_ = new IpTunnelStatsRecord();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::JuniperNetworksSensors::default_instance(),
    14, 11, false, false,
    &::IpTunnelStats::default_instance());
  IpTunnelStats::default_instance_->InitAsDefaultInstance();
  IpTunnelStatsRecord::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_iptunnels_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_iptunnels_2eproto {
  StaticDescriptorInitializer_iptunnels_2eproto() {
    protobuf_AddDesc_iptunnels_2eproto();
  }
} static_descriptor_initializer_iptunnels_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int IpTunnelStats::kIptunnelStatsRecordsFieldNumber;
#endif  // !_MSC_VER

IpTunnelStats::IpTunnelStats()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:IpTunnelStats)
}

void IpTunnelStats::InitAsDefaultInstance() {
}

IpTunnelStats::IpTunnelStats(const IpTunnelStats& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:IpTunnelStats)
}

void IpTunnelStats::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IpTunnelStats::~IpTunnelStats() {
  // @@protoc_insertion_point(destructor:IpTunnelStats)
  SharedDtor();
}

void IpTunnelStats::SharedDtor() {
  if (this != default_instance_) {
  }
}

void IpTunnelStats::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* IpTunnelStats::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return IpTunnelStats_descriptor_;
}

const IpTunnelStats& IpTunnelStats::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_iptunnels_2eproto();
  return *default_instance_;
}

IpTunnelStats* IpTunnelStats::default_instance_ = NULL;

IpTunnelStats* IpTunnelStats::New(::google::protobuf::Arena* arena) const {
  IpTunnelStats* n = new IpTunnelStats;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void IpTunnelStats::Clear() {
  iptunnel_stats_records_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool IpTunnelStats::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:IpTunnelStats)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .IpTunnelStatsRecord iptunnel_stats_records = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_iptunnel_stats_records:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_iptunnel_stats_records()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_iptunnel_stats_records;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:IpTunnelStats)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:IpTunnelStats)
  return false;
#undef DO_
}

void IpTunnelStats::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:IpTunnelStats)
  // repeated .IpTunnelStatsRecord iptunnel_stats_records = 1;
  for (unsigned int i = 0, n = this->iptunnel_stats_records_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->iptunnel_stats_records(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:IpTunnelStats)
}

::google::protobuf::uint8* IpTunnelStats::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:IpTunnelStats)
  // repeated .IpTunnelStatsRecord iptunnel_stats_records = 1;
  for (unsigned int i = 0, n = this->iptunnel_stats_records_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->iptunnel_stats_records(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:IpTunnelStats)
  return target;
}

int IpTunnelStats::ByteSize() const {
  int total_size = 0;

  // repeated .IpTunnelStatsRecord iptunnel_stats_records = 1;
  total_size += 1 * this->iptunnel_stats_records_size();
  for (int i = 0; i < this->iptunnel_stats_records_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->iptunnel_stats_records(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IpTunnelStats::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const IpTunnelStats* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const IpTunnelStats>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void IpTunnelStats::MergeFrom(const IpTunnelStats& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  iptunnel_stats_records_.MergeFrom(from.iptunnel_stats_records_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void IpTunnelStats::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IpTunnelStats::CopyFrom(const IpTunnelStats& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IpTunnelStats::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->iptunnel_stats_records())) return false;
  return true;
}

void IpTunnelStats::Swap(IpTunnelStats* other) {
  if (other == this) return;
  InternalSwap(other);
}
void IpTunnelStats::InternalSwap(IpTunnelStats* other) {
  iptunnel_stats_records_.UnsafeArenaSwap(&other->iptunnel_stats_records_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata IpTunnelStats::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = IpTunnelStats_descriptor_;
  metadata.reflection = IpTunnelStats_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// IpTunnelStats

// repeated .IpTunnelStatsRecord iptunnel_stats_records = 1;
int IpTunnelStats::iptunnel_stats_records_size() const {
  return iptunnel_stats_records_.size();
}
void IpTunnelStats::clear_iptunnel_stats_records() {
  iptunnel_stats_records_.Clear();
}
const ::IpTunnelStatsRecord& IpTunnelStats::iptunnel_stats_records(int index) const {
  // @@protoc_insertion_point(field_get:IpTunnelStats.iptunnel_stats_records)
  return iptunnel_stats_records_.Get(index);
}
::IpTunnelStatsRecord* IpTunnelStats::mutable_iptunnel_stats_records(int index) {
  // @@protoc_insertion_point(field_mutable:IpTunnelStats.iptunnel_stats_records)
  return iptunnel_stats_records_.Mutable(index);
}
::IpTunnelStatsRecord* IpTunnelStats::add_iptunnel_stats_records() {
  // @@protoc_insertion_point(field_add:IpTunnelStats.iptunnel_stats_records)
  return iptunnel_stats_records_.Add();
}
::google::protobuf::RepeatedPtrField< ::IpTunnelStatsRecord >*
IpTunnelStats::mutable_iptunnel_stats_records() {
  // @@protoc_insertion_point(field_mutable_list:IpTunnelStats.iptunnel_stats_records)
  return &iptunnel_stats_records_;
}
const ::google::protobuf::RepeatedPtrField< ::IpTunnelStatsRecord >&
IpTunnelStats::iptunnel_stats_records() const {
  // @@protoc_insertion_point(field_list:IpTunnelStats.iptunnel_stats_records)
  return iptunnel_stats_records_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int IpTunnelStatsRecord::kNameFieldNumber;
const int IpTunnelStatsRecord::kPacketsFieldNumber;
const int IpTunnelStatsRecord::kBytesFieldNumber;
const int IpTunnelStatsRecord::kRpfFailedPacketsFieldNumber;
const int IpTunnelStatsRecord::kRpfFailedBytesFieldNumber;
#endif  // !_MSC_VER

IpTunnelStatsRecord::IpTunnelStatsRecord()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:IpTunnelStatsRecord)
}

void IpTunnelStatsRecord::InitAsDefaultInstance() {
}

IpTunnelStatsRecord::IpTunnelStatsRecord(const IpTunnelStatsRecord& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:IpTunnelStatsRecord)
}

void IpTunnelStatsRecord::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  packets_ = GOOGLE_ULONGLONG(0);
  bytes_ = GOOGLE_ULONGLONG(0);
  rpf_failed_packets_ = GOOGLE_ULONGLONG(0);
  rpf_failed_bytes_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IpTunnelStatsRecord::~IpTunnelStatsRecord() {
  // @@protoc_insertion_point(destructor:IpTunnelStatsRecord)
  SharedDtor();
}

void IpTunnelStatsRecord::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void IpTunnelStatsRecord::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* IpTunnelStatsRecord::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return IpTunnelStatsRecord_descriptor_;
}

const IpTunnelStatsRecord& IpTunnelStatsRecord::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_iptunnels_2eproto();
  return *default_instance_;
}

IpTunnelStatsRecord* IpTunnelStatsRecord::default_instance_ = NULL;

IpTunnelStatsRecord* IpTunnelStatsRecord::New(::google::protobuf::Arena* arena) const {
  IpTunnelStatsRecord* n = new IpTunnelStatsRecord;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void IpTunnelStatsRecord::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<IpTunnelStatsRecord*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(packets_, rpf_failed_bytes_);
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool IpTunnelStatsRecord::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:IpTunnelStatsRecord)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "IpTunnelStatsRecord.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_packets;
        break;
      }

      // optional uint64 packets = 2;
      case 2: {
        if (tag == 16) {
         parse_packets:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &packets_)));
          set_has_packets();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_bytes;
        break;
      }

      // optional uint64 bytes = 3;
      case 3: {
        if (tag == 24) {
         parse_bytes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &bytes_)));
          set_has_bytes();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_rpf_failed_packets;
        break;
      }

      // optional uint64 rpf_failed_packets = 4;
      case 4: {
        if (tag == 32) {
         parse_rpf_failed_packets:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &rpf_failed_packets_)));
          set_has_rpf_failed_packets();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_rpf_failed_bytes;
        break;
      }

      // optional uint64 rpf_failed_bytes = 5;
      case 5: {
        if (tag == 40) {
         parse_rpf_failed_bytes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &rpf_failed_bytes_)));
          set_has_rpf_failed_bytes();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:IpTunnelStatsRecord)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:IpTunnelStatsRecord)
  return false;
#undef DO_
}

void IpTunnelStatsRecord::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:IpTunnelStatsRecord)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "IpTunnelStatsRecord.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional uint64 packets = 2;
  if (has_packets()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->packets(), output);
  }

  // optional uint64 bytes = 3;
  if (has_bytes()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->bytes(), output);
  }

  // optional uint64 rpf_failed_packets = 4;
  if (has_rpf_failed_packets()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->rpf_failed_packets(), output);
  }

  // optional uint64 rpf_failed_bytes = 5;
  if (has_rpf_failed_bytes()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->rpf_failed_bytes(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:IpTunnelStatsRecord)
}

::google::protobuf::uint8* IpTunnelStatsRecord::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:IpTunnelStatsRecord)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "IpTunnelStatsRecord.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional uint64 packets = 2;
  if (has_packets()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->packets(), target);
  }

  // optional uint64 bytes = 3;
  if (has_bytes()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->bytes(), target);
  }

  // optional uint64 rpf_failed_packets = 4;
  if (has_rpf_failed_packets()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->rpf_failed_packets(), target);
  }

  // optional uint64 rpf_failed_bytes = 5;
  if (has_rpf_failed_bytes()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->rpf_failed_bytes(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:IpTunnelStatsRecord)
  return target;
}

int IpTunnelStatsRecord::ByteSize() const {
  int total_size = 0;

  // required string name = 1;
  if (has_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }
  if (_has_bits_[1 / 32] & 30u) {
    // optional uint64 packets = 2;
    if (has_packets()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->packets());
    }

    // optional uint64 bytes = 3;
    if (has_bytes()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->bytes());
    }

    // optional uint64 rpf_failed_packets = 4;
    if (has_rpf_failed_packets()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->rpf_failed_packets());
    }

    // optional uint64 rpf_failed_bytes = 5;
    if (has_rpf_failed_bytes()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->rpf_failed_bytes());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IpTunnelStatsRecord::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const IpTunnelStatsRecord* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const IpTunnelStatsRecord>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void IpTunnelStatsRecord::MergeFrom(const IpTunnelStatsRecord& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_packets()) {
      set_packets(from.packets());
    }
    if (from.has_bytes()) {
      set_bytes(from.bytes());
    }
    if (from.has_rpf_failed_packets()) {
      set_rpf_failed_packets(from.rpf_failed_packets());
    }
    if (from.has_rpf_failed_bytes()) {
      set_rpf_failed_bytes(from.rpf_failed_bytes());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void IpTunnelStatsRecord::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IpTunnelStatsRecord::CopyFrom(const IpTunnelStatsRecord& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IpTunnelStatsRecord::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void IpTunnelStatsRecord::Swap(IpTunnelStatsRecord* other) {
  if (other == this) return;
  InternalSwap(other);
}
void IpTunnelStatsRecord::InternalSwap(IpTunnelStatsRecord* other) {
  name_.Swap(&other->name_);
  std::swap(packets_, other->packets_);
  std::swap(bytes_, other->bytes_);
  std::swap(rpf_failed_packets_, other->rpf_failed_packets_);
  std::swap(rpf_failed_bytes_, other->rpf_failed_bytes_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata IpTunnelStatsRecord::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = IpTunnelStatsRecord_descriptor_;
  metadata.reflection = IpTunnelStatsRecord_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// IpTunnelStatsRecord

// required string name = 1;
bool IpTunnelStatsRecord::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void IpTunnelStatsRecord::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void IpTunnelStatsRecord::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void IpTunnelStatsRecord::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& IpTunnelStatsRecord::name() const {
  // @@protoc_insertion_point(field_get:IpTunnelStatsRecord.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void IpTunnelStatsRecord::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:IpTunnelStatsRecord.name)
}
 void IpTunnelStatsRecord::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:IpTunnelStatsRecord.name)
}
 void IpTunnelStatsRecord::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:IpTunnelStatsRecord.name)
}
 ::std::string* IpTunnelStatsRecord::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:IpTunnelStatsRecord.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* IpTunnelStatsRecord::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void IpTunnelStatsRecord::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:IpTunnelStatsRecord.name)
}

// optional uint64 packets = 2;
bool IpTunnelStatsRecord::has_packets() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void IpTunnelStatsRecord::set_has_packets() {
  _has_bits_[0] |= 0x00000002u;
}
void IpTunnelStatsRecord::clear_has_packets() {
  _has_bits_[0] &= ~0x00000002u;
}
void IpTunnelStatsRecord::clear_packets() {
  packets_ = GOOGLE_ULONGLONG(0);
  clear_has_packets();
}
 ::google::protobuf::uint64 IpTunnelStatsRecord::packets() const {
  // @@protoc_insertion_point(field_get:IpTunnelStatsRecord.packets)
  return packets_;
}
 void IpTunnelStatsRecord::set_packets(::google::protobuf::uint64 value) {
  set_has_packets();
  packets_ = value;
  // @@protoc_insertion_point(field_set:IpTunnelStatsRecord.packets)
}

// optional uint64 bytes = 3;
bool IpTunnelStatsRecord::has_bytes() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void IpTunnelStatsRecord::set_has_bytes() {
  _has_bits_[0] |= 0x00000004u;
}
void IpTunnelStatsRecord::clear_has_bytes() {
  _has_bits_[0] &= ~0x00000004u;
}
void IpTunnelStatsRecord::clear_bytes() {
  bytes_ = GOOGLE_ULONGLONG(0);
  clear_has_bytes();
}
 ::google::protobuf::uint64 IpTunnelStatsRecord::bytes() const {
  // @@protoc_insertion_point(field_get:IpTunnelStatsRecord.bytes)
  return bytes_;
}
 void IpTunnelStatsRecord::set_bytes(::google::protobuf::uint64 value) {
  set_has_bytes();
  bytes_ = value;
  // @@protoc_insertion_point(field_set:IpTunnelStatsRecord.bytes)
}

// optional uint64 rpf_failed_packets = 4;
bool IpTunnelStatsRecord::has_rpf_failed_packets() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void IpTunnelStatsRecord::set_has_rpf_failed_packets() {
  _has_bits_[0] |= 0x00000008u;
}
void IpTunnelStatsRecord::clear_has_rpf_failed_packets() {
  _has_bits_[0] &= ~0x00000008u;
}
void IpTunnelStatsRecord::clear_rpf_failed_packets() {
  rpf_failed_packets_ = GOOGLE_ULONGLONG(0);
  clear_has_rpf_failed_packets();
}
 ::google::protobuf::uint64 IpTunnelStatsRecord::rpf_failed_packets() const {
  // @@protoc_insertion_point(field_get:IpTunnelStatsRecord.rpf_failed_packets)
  return rpf_failed_packets_;
}
 void IpTunnelStatsRecord::set_rpf_failed_packets(::google::protobuf::uint64 value) {
  set_has_rpf_failed_packets();
  rpf_failed_packets_ = value;
  // @@protoc_insertion_point(field_set:IpTunnelStatsRecord.rpf_failed_packets)
}

// optional uint64 rpf_failed_bytes = 5;
bool IpTunnelStatsRecord::has_rpf_failed_bytes() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void IpTunnelStatsRecord::set_has_rpf_failed_bytes() {
  _has_bits_[0] |= 0x00000010u;
}
void IpTunnelStatsRecord::clear_has_rpf_failed_bytes() {
  _has_bits_[0] &= ~0x00000010u;
}
void IpTunnelStatsRecord::clear_rpf_failed_bytes() {
  rpf_failed_bytes_ = GOOGLE_ULONGLONG(0);
  clear_has_rpf_failed_bytes();
}
 ::google::protobuf::uint64 IpTunnelStatsRecord::rpf_failed_bytes() const {
  // @@protoc_insertion_point(field_get:IpTunnelStatsRecord.rpf_failed_bytes)
  return rpf_failed_bytes_;
}
 void IpTunnelStatsRecord::set_rpf_failed_bytes(::google::protobuf::uint64 value) {
  set_has_rpf_failed_bytes();
  rpf_failed_bytes_ = value;
  // @@protoc_insertion_point(field_set:IpTunnelStatsRecord.rpf_failed_bytes)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS
::google::protobuf::internal::ExtensionIdentifier< ::JuniperNetworksSensors,
    ::google::protobuf::internal::MessageTypeTraits< ::IpTunnelStats >, 11, false >
  jnpr_iptunnels_statistics_ext(kJnprIptunnelsStatisticsExtFieldNumber, ::IpTunnelStats::default_instance());

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
