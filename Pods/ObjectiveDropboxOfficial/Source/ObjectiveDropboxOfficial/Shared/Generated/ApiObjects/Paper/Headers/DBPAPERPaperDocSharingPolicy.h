///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBPAPERRefPaperDoc.h"
#import "DBSerializableProtocol.h"

@class DBPAPERPaperDocSharingPolicy;
@class DBPAPERSharingPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocSharingPolicy` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERPaperDocSharingPolicy : DBPAPERRefPaperDoc <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The default sharing policy to be set for the Paper doc.
@property (nonatomic, readonly) DBPAPERSharingPolicy *sharingPolicy;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param docId The Paper doc ID.
/// @param sharingPolicy The default sharing policy to be set for the Paper doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocId:(NSString *)docId sharingPolicy:(DBPAPERSharingPolicy *)sharingPolicy;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperDocSharingPolicy` struct.
///
@interface DBPAPERPaperDocSharingPolicySerializer : NSObject

///
/// Serializes `DBPAPERPaperDocSharingPolicy` instances.
///
/// @param instance An instance of the `DBPAPERPaperDocSharingPolicy` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERPaperDocSharingPolicy` API object.
///
+ (nullable NSDictionary *)serialize:(DBPAPERPaperDocSharingPolicy *)instance;

///
/// Deserializes `DBPAPERPaperDocSharingPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERPaperDocSharingPolicy` API object.
///
/// @return An instantiation of the `DBPAPERPaperDocSharingPolicy` object.
///
+ (DBPAPERPaperDocSharingPolicy *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
