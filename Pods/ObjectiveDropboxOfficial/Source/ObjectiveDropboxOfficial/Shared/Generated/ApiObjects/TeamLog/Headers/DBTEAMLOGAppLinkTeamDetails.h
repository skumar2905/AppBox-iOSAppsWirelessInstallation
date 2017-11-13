///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGAppLinkTeamDetails;
@class DBTEAMLOGAppLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AppLinkTeamDetails` struct.
///
/// Linked an app for team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGAppLinkTeamDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Relevant application details.
@property (nonatomic, readonly) DBTEAMLOGAppLogInfo *appInfo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param appInfo Relevant application details.
///
/// @return An initialized instance.
///
- (instancetype)initWithAppInfo:(DBTEAMLOGAppLogInfo *)appInfo;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AppLinkTeamDetails` struct.
///
@interface DBTEAMLOGAppLinkTeamDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGAppLinkTeamDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGAppLinkTeamDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGAppLinkTeamDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGAppLinkTeamDetails *)instance;

///
/// Deserializes `DBTEAMLOGAppLinkTeamDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGAppLinkTeamDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGAppLinkTeamDetails` object.
///
+ (DBTEAMLOGAppLinkTeamDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END