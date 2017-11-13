///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESDeleteBatchResultData;
@class DBFILESMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeleteBatchResultData` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESDeleteBatchResultData : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Metadata of the deleted object.
@property (nonatomic, readonly) DBFILESMetadata *metadata;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param metadata Metadata of the deleted object.
///
/// @return An initialized instance.
///
- (instancetype)initWithMetadata:(DBFILESMetadata *)metadata;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeleteBatchResultData` struct.
///
@interface DBFILESDeleteBatchResultDataSerializer : NSObject

///
/// Serializes `DBFILESDeleteBatchResultData` instances.
///
/// @param instance An instance of the `DBFILESDeleteBatchResultData` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESDeleteBatchResultData` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILESDeleteBatchResultData *)instance;

///
/// Deserializes `DBFILESDeleteBatchResultData` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESDeleteBatchResultData` API object.
///
/// @return An instantiation of the `DBFILESDeleteBatchResultData` object.
///
+ (DBFILESDeleteBatchResultData *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
