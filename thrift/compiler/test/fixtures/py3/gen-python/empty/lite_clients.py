#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import apache.thrift.metadata.lite_types as _fbthrift_metadata
import folly.iobuf as _fbthrift_iobuf
from thrift.py3lite.client import (
    AsyncClient as _fbthrift_py3lite_AsyncClient,
    SyncClient as _fbthrift_py3lite_SyncClient,
    Client as _fbthrift_py3lite_Client,
)
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions
import thrift.py3lite.types as _fbthrift_py3lite_types
import empty.lite_types
import empty.lite_metadata


class NullService(_fbthrift_py3lite_Client["NullService.Async", "NullService.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "empty.NullService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return empty.lite_metadata.gen_metadata_service_NullService()

    class Async(_fbthrift_py3lite_AsyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "empty.NullService"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return empty.lite_metadata.gen_metadata_service_NullService()


    class Sync(_fbthrift_py3lite_SyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "empty.NullService"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return empty.lite_metadata.gen_metadata_service_NullService()

