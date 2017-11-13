///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGroupChangeMemberRoleDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupChangeMemberRoleDetails` struct.
///
/// Changed the manager permissions belonging to a group member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGroupChangeMemberRoleDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Is group owner.
@property (nonatomic, readonly) NSNumber *isGroupOwner;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param isGroupOwner Is group owner.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsGroupOwner:(NSNumber *)isGroupOwner;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupChangeMemberRoleDetails` struct.
///
@interface DBTEAMLOGGroupChangeMemberRoleDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGGroupChangeMemberRoleDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGGroupChangeMemberRoleDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupChangeMemberRoleDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGGroupChangeMemberRoleDetails *)instance;

///
/// Deserializes `DBTEAMLOGGroupChangeMemberRoleDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupChangeMemberRoleDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGGroupChangeMemberRoleDetails`
/// object.
///
+ (DBTEAMLOGGroupChangeMemberRoleDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
