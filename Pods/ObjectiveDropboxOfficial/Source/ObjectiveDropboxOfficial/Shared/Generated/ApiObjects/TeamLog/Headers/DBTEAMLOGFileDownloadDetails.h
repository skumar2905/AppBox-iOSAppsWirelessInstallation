///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFileDownloadDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileDownloadDetails` struct.
///
/// Downloaded files and/or folders.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileDownloadDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileDownloadDetails` struct.
///
@interface DBTEAMLOGFileDownloadDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileDownloadDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileDownloadDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileDownloadDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGFileDownloadDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileDownloadDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileDownloadDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileDownloadDetails` object.
///
+ (DBTEAMLOGFileDownloadDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END