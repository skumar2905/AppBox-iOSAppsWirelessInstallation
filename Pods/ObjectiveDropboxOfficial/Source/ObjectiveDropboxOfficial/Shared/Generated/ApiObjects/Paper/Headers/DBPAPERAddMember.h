///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERAddMember;
@class DBPAPERPaperDocPermissionLevel;
@class DBSHARINGMemberSelector;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AddMember` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERAddMember : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Permission for the user.
@property (nonatomic, readonly) DBPAPERPaperDocPermissionLevel *permissionLevel;

/// User which should be added to the Paper doc. Specify only email address or
/// Dropbox account ID.
@property (nonatomic, readonly) DBSHARINGMemberSelector *member;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param member User which should be added to the Paper doc. Specify only
/// email address or Dropbox account ID.
/// @param permissionLevel Permission for the user.
///
/// @return An initialized instance.
///
- (instancetype)initWithMember:(DBSHARINGMemberSelector *)member
               permissionLevel:(nullable DBPAPERPaperDocPermissionLevel *)permissionLevel;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param member User which should be added to the Paper doc. Specify only
/// email address or Dropbox account ID.
///
/// @return An initialized instance.
///
- (instancetype)initWithMember:(DBSHARINGMemberSelector *)member;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AddMember` struct.
///
@interface DBPAPERAddMemberSerializer : NSObject

///
/// Serializes `DBPAPERAddMember` instances.
///
/// @param instance An instance of the `DBPAPERAddMember` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERAddMember` API object.
///
+ (nullable NSDictionary *)serialize:(DBPAPERAddMember *)instance;

///
/// Deserializes `DBPAPERAddMember` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERAddMember` API object.
///
/// @return An instantiation of the `DBPAPERAddMember` object.
///
+ (DBPAPERAddMember *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
