# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: agent.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='agent.proto',
  package='Telemetry',
  syntax='proto3',
  serialized_pb=b'\n\x0b\x61gent.proto\x12\tTelemetry\"\xaa\x01\n\x13SubscriptionRequest\x12+\n\x05input\x18\x01 \x01(\x0b\x32\x1c.Telemetry.SubscriptionInput\x12\"\n\tpath_list\x18\x02 \x03(\x0b\x32\x0f.Telemetry.Path\x12\x42\n\x11\x61\x64\x64itional_config\x18\x03 \x01(\x0b\x32\'.Telemetry.SubscriptionAdditionalConfig\"A\n\x11SubscriptionInput\x12,\n\x0e\x63ollector_list\x18\x01 \x03(\x0b\x32\x14.Telemetry.Collector\"*\n\tCollector\x12\x0f\n\x07\x61\x64\x64ress\x18\x01 \x01(\t\x12\x0c\n\x04port\x18\x02 \x01(\r\"w\n\x04Path\x12\x0c\n\x04path\x18\x01 \x01(\t\x12\x0e\n\x06\x66ilter\x18\x02 \x01(\t\x12\x1a\n\x12suppress_unchanged\x18\x03 \x01(\x08\x12\x1b\n\x13max_silent_interval\x18\x04 \x01(\r\x12\x18\n\x10sample_frequency\x18\x05 \x01(\r\"Q\n\x1cSubscriptionAdditionalConfig\x12\x15\n\rlimit_records\x18\x01 \x01(\x05\x12\x1a\n\x12limit_time_seconds\x18\x02 \x01(\x05\"j\n\x11SubscriptionReply\x12\x31\n\x08response\x18\x01 \x01(\x0b\x32\x1f.Telemetry.SubscriptionResponse\x12\"\n\tpath_list\x18\x02 \x03(\x0b\x32\x0f.Telemetry.Path\"/\n\x14SubscriptionResponse\x12\x17\n\x0fsubscription_id\x18\x01 \x01(\r\"\xae\x01\n\x0eOpenConfigData\x12\x11\n\tsystem_id\x18\x01 \x01(\t\x12\x14\n\x0c\x63omponent_id\x18\x02 \x01(\r\x12\x18\n\x10sub_component_id\x18\x03 \x01(\r\x12\x0c\n\x04path\x18\x04 \x01(\t\x12\x17\n\x0fsequence_number\x18\x05 \x01(\x04\x12\x11\n\ttimestamp\x18\x06 \x01(\x04\x12\x1f\n\x02kv\x18\x07 \x03(\x0b\x32\x13.Telemetry.KeyValue\"\xbb\x01\n\x08KeyValue\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\x16\n\x0c\x64ouble_value\x18\x05 \x01(\x01H\x00\x12\x13\n\tint_value\x18\x06 \x01(\x03H\x00\x12\x14\n\nuint_value\x18\x07 \x01(\x04H\x00\x12\x14\n\nsint_value\x18\x08 \x01(\x12H\x00\x12\x14\n\nbool_value\x18\t \x01(\x08H\x00\x12\x13\n\tstr_value\x18\n \x01(\tH\x00\x12\x15\n\x0b\x62ytes_value\x18\x0b \x01(\x0cH\x00\x42\x07\n\x05value\"4\n\x19\x43\x61ncelSubscriptionRequest\x12\x17\n\x0fsubscription_id\x18\x01 \x01(\r\"P\n\x17\x43\x61ncelSubscriptionReply\x12#\n\x04\x63ode\x18\x01 \x01(\x0e\x32\x15.Telemetry.ReturnCode\x12\x10\n\x08\x63ode_str\x18\x02 \x01(\t\"2\n\x17GetSubscriptionsRequest\x12\x17\n\x0fsubscription_id\x18\x01 \x01(\r\"P\n\x15GetSubscriptionsReply\x12\x37\n\x11subscription_list\x18\x01 \x03(\x0b\x32\x1c.Telemetry.SubscriptionReply\"c\n\x1aGetOperationalStateRequest\x12\x17\n\x0fsubscription_id\x18\x01 \x01(\r\x12,\n\tverbosity\x18\x02 \x01(\x0e\x32\x19.Telemetry.VerbosityLevel\";\n\x18GetOperationalStateReply\x12\x1f\n\x02kv\x18\x01 \x03(\x0b\x32\x13.Telemetry.KeyValue\"\x15\n\x13\x44\x61taEncodingRequest\"C\n\x11\x44\x61taEncodingReply\x12.\n\rencoding_list\x18\x01 \x03(\x0e\x32\x17.Telemetry.EncodingType*G\n\nReturnCode\x12\x0b\n\x07SUCCESS\x10\x00\x12\x19\n\x15NO_SUBSCRIPTION_ENTRY\x10\x01\x12\x11\n\rUNKNOWN_ERROR\x10\x02*2\n\x0eVerbosityLevel\x12\n\n\x06\x44\x45TAIL\x10\x00\x12\t\n\x05TERSE\x10\x01\x12\t\n\x05\x42RIEF\x10\x02*A\n\x0c\x45ncodingType\x12\r\n\tUNDEFINED\x10\x00\x12\x07\n\x03XML\x10\x01\x12\r\n\tJSON_IETF\x10\x02\x12\n\n\x06PROTO3\x10\x03\x32\xfc\x03\n\x13OpenConfigTelemetry\x12S\n\x12telemetrySubscribe\x12\x1e.Telemetry.SubscriptionRequest\x1a\x19.Telemetry.OpenConfigData\"\x00\x30\x01\x12i\n\x1b\x63\x61ncelTelemetrySubscription\x12$.Telemetry.CancelSubscriptionRequest\x1a\".Telemetry.CancelSubscriptionReply\"\x00\x12\x63\n\x19getTelemetrySubscriptions\x12\".Telemetry.GetSubscriptionsRequest\x1a .Telemetry.GetSubscriptionsReply\"\x00\x12l\n\x1cgetTelemetryOperationalState\x12%.Telemetry.GetOperationalStateRequest\x1a#.Telemetry.GetOperationalStateReply\"\x00\x12R\n\x10getDataEncodings\x12\x1e.Telemetry.DataEncodingRequest\x1a\x1c.Telemetry.DataEncodingReply\"\x00\x62\x06proto3'
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

_RETURNCODE = _descriptor.EnumDescriptor(
  name='ReturnCode',
  full_name='Telemetry.ReturnCode',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='SUCCESS', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='NO_SUBSCRIPTION_ENTRY', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN_ERROR', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1562,
  serialized_end=1633,
)
_sym_db.RegisterEnumDescriptor(_RETURNCODE)

ReturnCode = enum_type_wrapper.EnumTypeWrapper(_RETURNCODE)
_VERBOSITYLEVEL = _descriptor.EnumDescriptor(
  name='VerbosityLevel',
  full_name='Telemetry.VerbosityLevel',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='DETAIL', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TERSE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BRIEF', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1635,
  serialized_end=1685,
)
_sym_db.RegisterEnumDescriptor(_VERBOSITYLEVEL)

VerbosityLevel = enum_type_wrapper.EnumTypeWrapper(_VERBOSITYLEVEL)
_ENCODINGTYPE = _descriptor.EnumDescriptor(
  name='EncodingType',
  full_name='Telemetry.EncodingType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNDEFINED', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='XML', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='JSON_IETF', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PROTO3', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1687,
  serialized_end=1752,
)
_sym_db.RegisterEnumDescriptor(_ENCODINGTYPE)

EncodingType = enum_type_wrapper.EnumTypeWrapper(_ENCODINGTYPE)
SUCCESS = 0
NO_SUBSCRIPTION_ENTRY = 1
UNKNOWN_ERROR = 2
DETAIL = 0
TERSE = 1
BRIEF = 2
UNDEFINED = 0
XML = 1
JSON_IETF = 2
PROTO3 = 3



_SUBSCRIPTIONREQUEST = _descriptor.Descriptor(
  name='SubscriptionRequest',
  full_name='Telemetry.SubscriptionRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='input', full_name='Telemetry.SubscriptionRequest.input', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='path_list', full_name='Telemetry.SubscriptionRequest.path_list', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='additional_config', full_name='Telemetry.SubscriptionRequest.additional_config', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=27,
  serialized_end=197,
)


_SUBSCRIPTIONINPUT = _descriptor.Descriptor(
  name='SubscriptionInput',
  full_name='Telemetry.SubscriptionInput',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='collector_list', full_name='Telemetry.SubscriptionInput.collector_list', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=199,
  serialized_end=264,
)


_COLLECTOR = _descriptor.Descriptor(
  name='Collector',
  full_name='Telemetry.Collector',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='address', full_name='Telemetry.Collector.address', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='port', full_name='Telemetry.Collector.port', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=266,
  serialized_end=308,
)


_PATH = _descriptor.Descriptor(
  name='Path',
  full_name='Telemetry.Path',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='path', full_name='Telemetry.Path.path', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='filter', full_name='Telemetry.Path.filter', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='suppress_unchanged', full_name='Telemetry.Path.suppress_unchanged', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='max_silent_interval', full_name='Telemetry.Path.max_silent_interval', index=3,
      number=4, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sample_frequency', full_name='Telemetry.Path.sample_frequency', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=310,
  serialized_end=429,
)


_SUBSCRIPTIONADDITIONALCONFIG = _descriptor.Descriptor(
  name='SubscriptionAdditionalConfig',
  full_name='Telemetry.SubscriptionAdditionalConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='limit_records', full_name='Telemetry.SubscriptionAdditionalConfig.limit_records', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='limit_time_seconds', full_name='Telemetry.SubscriptionAdditionalConfig.limit_time_seconds', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=431,
  serialized_end=512,
)


_SUBSCRIPTIONREPLY = _descriptor.Descriptor(
  name='SubscriptionReply',
  full_name='Telemetry.SubscriptionReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='response', full_name='Telemetry.SubscriptionReply.response', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='path_list', full_name='Telemetry.SubscriptionReply.path_list', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=514,
  serialized_end=620,
)


_SUBSCRIPTIONRESPONSE = _descriptor.Descriptor(
  name='SubscriptionResponse',
  full_name='Telemetry.SubscriptionResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='subscription_id', full_name='Telemetry.SubscriptionResponse.subscription_id', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=622,
  serialized_end=669,
)


_OPENCONFIGDATA = _descriptor.Descriptor(
  name='OpenConfigData',
  full_name='Telemetry.OpenConfigData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='system_id', full_name='Telemetry.OpenConfigData.system_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='component_id', full_name='Telemetry.OpenConfigData.component_id', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sub_component_id', full_name='Telemetry.OpenConfigData.sub_component_id', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='path', full_name='Telemetry.OpenConfigData.path', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sequence_number', full_name='Telemetry.OpenConfigData.sequence_number', index=4,
      number=5, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='Telemetry.OpenConfigData.timestamp', index=5,
      number=6, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='kv', full_name='Telemetry.OpenConfigData.kv', index=6,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=672,
  serialized_end=846,
)


_KEYVALUE = _descriptor.Descriptor(
  name='KeyValue',
  full_name='Telemetry.KeyValue',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='Telemetry.KeyValue.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='double_value', full_name='Telemetry.KeyValue.double_value', index=1,
      number=5, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='int_value', full_name='Telemetry.KeyValue.int_value', index=2,
      number=6, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='uint_value', full_name='Telemetry.KeyValue.uint_value', index=3,
      number=7, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sint_value', full_name='Telemetry.KeyValue.sint_value', index=4,
      number=8, type=18, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bool_value', full_name='Telemetry.KeyValue.bool_value', index=5,
      number=9, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='str_value', full_name='Telemetry.KeyValue.str_value', index=6,
      number=10, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bytes_value', full_name='Telemetry.KeyValue.bytes_value', index=7,
      number=11, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='value', full_name='Telemetry.KeyValue.value',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=849,
  serialized_end=1036,
)


_CANCELSUBSCRIPTIONREQUEST = _descriptor.Descriptor(
  name='CancelSubscriptionRequest',
  full_name='Telemetry.CancelSubscriptionRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='subscription_id', full_name='Telemetry.CancelSubscriptionRequest.subscription_id', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1038,
  serialized_end=1090,
)


_CANCELSUBSCRIPTIONREPLY = _descriptor.Descriptor(
  name='CancelSubscriptionReply',
  full_name='Telemetry.CancelSubscriptionReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='code', full_name='Telemetry.CancelSubscriptionReply.code', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='code_str', full_name='Telemetry.CancelSubscriptionReply.code_str', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1092,
  serialized_end=1172,
)


_GETSUBSCRIPTIONSREQUEST = _descriptor.Descriptor(
  name='GetSubscriptionsRequest',
  full_name='Telemetry.GetSubscriptionsRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='subscription_id', full_name='Telemetry.GetSubscriptionsRequest.subscription_id', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1174,
  serialized_end=1224,
)


_GETSUBSCRIPTIONSREPLY = _descriptor.Descriptor(
  name='GetSubscriptionsReply',
  full_name='Telemetry.GetSubscriptionsReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='subscription_list', full_name='Telemetry.GetSubscriptionsReply.subscription_list', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1226,
  serialized_end=1306,
)


_GETOPERATIONALSTATEREQUEST = _descriptor.Descriptor(
  name='GetOperationalStateRequest',
  full_name='Telemetry.GetOperationalStateRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='subscription_id', full_name='Telemetry.GetOperationalStateRequest.subscription_id', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='verbosity', full_name='Telemetry.GetOperationalStateRequest.verbosity', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1308,
  serialized_end=1407,
)


_GETOPERATIONALSTATEREPLY = _descriptor.Descriptor(
  name='GetOperationalStateReply',
  full_name='Telemetry.GetOperationalStateReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='kv', full_name='Telemetry.GetOperationalStateReply.kv', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1409,
  serialized_end=1468,
)


_DATAENCODINGREQUEST = _descriptor.Descriptor(
  name='DataEncodingRequest',
  full_name='Telemetry.DataEncodingRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1470,
  serialized_end=1491,
)


_DATAENCODINGREPLY = _descriptor.Descriptor(
  name='DataEncodingReply',
  full_name='Telemetry.DataEncodingReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='encoding_list', full_name='Telemetry.DataEncodingReply.encoding_list', index=0,
      number=1, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1493,
  serialized_end=1560,
)

_SUBSCRIPTIONREQUEST.fields_by_name['input'].message_type = _SUBSCRIPTIONINPUT
_SUBSCRIPTIONREQUEST.fields_by_name['path_list'].message_type = _PATH
_SUBSCRIPTIONREQUEST.fields_by_name['additional_config'].message_type = _SUBSCRIPTIONADDITIONALCONFIG
_SUBSCRIPTIONINPUT.fields_by_name['collector_list'].message_type = _COLLECTOR
_SUBSCRIPTIONREPLY.fields_by_name['response'].message_type = _SUBSCRIPTIONRESPONSE
_SUBSCRIPTIONREPLY.fields_by_name['path_list'].message_type = _PATH
_OPENCONFIGDATA.fields_by_name['kv'].message_type = _KEYVALUE
_KEYVALUE.oneofs_by_name['value'].fields.append(
  _KEYVALUE.fields_by_name['double_value'])
_KEYVALUE.fields_by_name['double_value'].containing_oneof = _KEYVALUE.oneofs_by_name['value']
_KEYVALUE.oneofs_by_name['value'].fields.append(
  _KEYVALUE.fields_by_name['int_value'])
_KEYVALUE.fields_by_name['int_value'].containing_oneof = _KEYVALUE.oneofs_by_name['value']
_KEYVALUE.oneofs_by_name['value'].fields.append(
  _KEYVALUE.fields_by_name['uint_value'])
_KEYVALUE.fields_by_name['uint_value'].containing_oneof = _KEYVALUE.oneofs_by_name['value']
_KEYVALUE.oneofs_by_name['value'].fields.append(
  _KEYVALUE.fields_by_name['sint_value'])
_KEYVALUE.fields_by_name['sint_value'].containing_oneof = _KEYVALUE.oneofs_by_name['value']
_KEYVALUE.oneofs_by_name['value'].fields.append(
  _KEYVALUE.fields_by_name['bool_value'])
_KEYVALUE.fields_by_name['bool_value'].containing_oneof = _KEYVALUE.oneofs_by_name['value']
_KEYVALUE.oneofs_by_name['value'].fields.append(
  _KEYVALUE.fields_by_name['str_value'])
_KEYVALUE.fields_by_name['str_value'].containing_oneof = _KEYVALUE.oneofs_by_name['value']
_KEYVALUE.oneofs_by_name['value'].fields.append(
  _KEYVALUE.fields_by_name['bytes_value'])
_KEYVALUE.fields_by_name['bytes_value'].containing_oneof = _KEYVALUE.oneofs_by_name['value']
_CANCELSUBSCRIPTIONREPLY.fields_by_name['code'].enum_type = _RETURNCODE
_GETSUBSCRIPTIONSREPLY.fields_by_name['subscription_list'].message_type = _SUBSCRIPTIONREPLY
_GETOPERATIONALSTATEREQUEST.fields_by_name['verbosity'].enum_type = _VERBOSITYLEVEL
_GETOPERATIONALSTATEREPLY.fields_by_name['kv'].message_type = _KEYVALUE
_DATAENCODINGREPLY.fields_by_name['encoding_list'].enum_type = _ENCODINGTYPE
DESCRIPTOR.message_types_by_name['SubscriptionRequest'] = _SUBSCRIPTIONREQUEST
DESCRIPTOR.message_types_by_name['SubscriptionInput'] = _SUBSCRIPTIONINPUT
DESCRIPTOR.message_types_by_name['Collector'] = _COLLECTOR
DESCRIPTOR.message_types_by_name['Path'] = _PATH
DESCRIPTOR.message_types_by_name['SubscriptionAdditionalConfig'] = _SUBSCRIPTIONADDITIONALCONFIG
DESCRIPTOR.message_types_by_name['SubscriptionReply'] = _SUBSCRIPTIONREPLY
DESCRIPTOR.message_types_by_name['SubscriptionResponse'] = _SUBSCRIPTIONRESPONSE
DESCRIPTOR.message_types_by_name['OpenConfigData'] = _OPENCONFIGDATA
DESCRIPTOR.message_types_by_name['KeyValue'] = _KEYVALUE
DESCRIPTOR.message_types_by_name['CancelSubscriptionRequest'] = _CANCELSUBSCRIPTIONREQUEST
DESCRIPTOR.message_types_by_name['CancelSubscriptionReply'] = _CANCELSUBSCRIPTIONREPLY
DESCRIPTOR.message_types_by_name['GetSubscriptionsRequest'] = _GETSUBSCRIPTIONSREQUEST
DESCRIPTOR.message_types_by_name['GetSubscriptionsReply'] = _GETSUBSCRIPTIONSREPLY
DESCRIPTOR.message_types_by_name['GetOperationalStateRequest'] = _GETOPERATIONALSTATEREQUEST
DESCRIPTOR.message_types_by_name['GetOperationalStateReply'] = _GETOPERATIONALSTATEREPLY
DESCRIPTOR.message_types_by_name['DataEncodingRequest'] = _DATAENCODINGREQUEST
DESCRIPTOR.message_types_by_name['DataEncodingReply'] = _DATAENCODINGREPLY
DESCRIPTOR.enum_types_by_name['ReturnCode'] = _RETURNCODE
DESCRIPTOR.enum_types_by_name['VerbosityLevel'] = _VERBOSITYLEVEL
DESCRIPTOR.enum_types_by_name['EncodingType'] = _ENCODINGTYPE

SubscriptionRequest = _reflection.GeneratedProtocolMessageType('SubscriptionRequest', (_message.Message,), dict(
  DESCRIPTOR = _SUBSCRIPTIONREQUEST,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.SubscriptionRequest)
  ))
_sym_db.RegisterMessage(SubscriptionRequest)

SubscriptionInput = _reflection.GeneratedProtocolMessageType('SubscriptionInput', (_message.Message,), dict(
  DESCRIPTOR = _SUBSCRIPTIONINPUT,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.SubscriptionInput)
  ))
_sym_db.RegisterMessage(SubscriptionInput)

Collector = _reflection.GeneratedProtocolMessageType('Collector', (_message.Message,), dict(
  DESCRIPTOR = _COLLECTOR,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.Collector)
  ))
_sym_db.RegisterMessage(Collector)

Path = _reflection.GeneratedProtocolMessageType('Path', (_message.Message,), dict(
  DESCRIPTOR = _PATH,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.Path)
  ))
_sym_db.RegisterMessage(Path)

SubscriptionAdditionalConfig = _reflection.GeneratedProtocolMessageType('SubscriptionAdditionalConfig', (_message.Message,), dict(
  DESCRIPTOR = _SUBSCRIPTIONADDITIONALCONFIG,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.SubscriptionAdditionalConfig)
  ))
_sym_db.RegisterMessage(SubscriptionAdditionalConfig)

SubscriptionReply = _reflection.GeneratedProtocolMessageType('SubscriptionReply', (_message.Message,), dict(
  DESCRIPTOR = _SUBSCRIPTIONREPLY,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.SubscriptionReply)
  ))
_sym_db.RegisterMessage(SubscriptionReply)

SubscriptionResponse = _reflection.GeneratedProtocolMessageType('SubscriptionResponse', (_message.Message,), dict(
  DESCRIPTOR = _SUBSCRIPTIONRESPONSE,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.SubscriptionResponse)
  ))
_sym_db.RegisterMessage(SubscriptionResponse)

OpenConfigData = _reflection.GeneratedProtocolMessageType('OpenConfigData', (_message.Message,), dict(
  DESCRIPTOR = _OPENCONFIGDATA,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.OpenConfigData)
  ))
_sym_db.RegisterMessage(OpenConfigData)

KeyValue = _reflection.GeneratedProtocolMessageType('KeyValue', (_message.Message,), dict(
  DESCRIPTOR = _KEYVALUE,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.KeyValue)
  ))
_sym_db.RegisterMessage(KeyValue)

CancelSubscriptionRequest = _reflection.GeneratedProtocolMessageType('CancelSubscriptionRequest', (_message.Message,), dict(
  DESCRIPTOR = _CANCELSUBSCRIPTIONREQUEST,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.CancelSubscriptionRequest)
  ))
_sym_db.RegisterMessage(CancelSubscriptionRequest)

CancelSubscriptionReply = _reflection.GeneratedProtocolMessageType('CancelSubscriptionReply', (_message.Message,), dict(
  DESCRIPTOR = _CANCELSUBSCRIPTIONREPLY,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.CancelSubscriptionReply)
  ))
_sym_db.RegisterMessage(CancelSubscriptionReply)

GetSubscriptionsRequest = _reflection.GeneratedProtocolMessageType('GetSubscriptionsRequest', (_message.Message,), dict(
  DESCRIPTOR = _GETSUBSCRIPTIONSREQUEST,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.GetSubscriptionsRequest)
  ))
_sym_db.RegisterMessage(GetSubscriptionsRequest)

GetSubscriptionsReply = _reflection.GeneratedProtocolMessageType('GetSubscriptionsReply', (_message.Message,), dict(
  DESCRIPTOR = _GETSUBSCRIPTIONSREPLY,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.GetSubscriptionsReply)
  ))
_sym_db.RegisterMessage(GetSubscriptionsReply)

GetOperationalStateRequest = _reflection.GeneratedProtocolMessageType('GetOperationalStateRequest', (_message.Message,), dict(
  DESCRIPTOR = _GETOPERATIONALSTATEREQUEST,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.GetOperationalStateRequest)
  ))
_sym_db.RegisterMessage(GetOperationalStateRequest)

GetOperationalStateReply = _reflection.GeneratedProtocolMessageType('GetOperationalStateReply', (_message.Message,), dict(
  DESCRIPTOR = _GETOPERATIONALSTATEREPLY,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.GetOperationalStateReply)
  ))
_sym_db.RegisterMessage(GetOperationalStateReply)

DataEncodingRequest = _reflection.GeneratedProtocolMessageType('DataEncodingRequest', (_message.Message,), dict(
  DESCRIPTOR = _DATAENCODINGREQUEST,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.DataEncodingRequest)
  ))
_sym_db.RegisterMessage(DataEncodingRequest)

DataEncodingReply = _reflection.GeneratedProtocolMessageType('DataEncodingReply', (_message.Message,), dict(
  DESCRIPTOR = _DATAENCODINGREPLY,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:Telemetry.DataEncodingReply)
  ))
_sym_db.RegisterMessage(DataEncodingReply)


# @@protoc_insertion_point(module_scope)
