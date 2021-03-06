//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
// UUID: C03262C7-645F-37C6-88F1-787D2B422F65
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 126.2.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol NSSCompanionServerProtocol <NSSServerProtocol>
- (void)getLocalesInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getLegalDocuments:(void (^)(NSDictionary *, NSError *))arg1;
- (void)rebootDevice;
- (void)removeProfileWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)installProfile:(NSData *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)getProfileWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(NSData *, NSError *))arg2;
- (void)getProfilesInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getiCloudInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)obliterateGizmo:(void (^)(NSError *))arg1;
- (void)getAboutInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)purgeUsageBundle:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)getUsage:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setDeviceName:(NSString *)arg1;
@end

@protocol NSSServerProtocol <NSObject>
- (void)enableAirplaneMode:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@interface NSSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_externalQueue;
    NSXPCConnection *_xpcConnection;
}

+ (void)displayAirplaneModeMirroringUserEducationAlert;
+ (void)displayAlertFailedRemoteAirplaneMode;
+ (void)displayAlertWithTitle:(id)arg1 titleColor:(id)arg2 body:(id)arg3 icon:(id)arg4;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (void)getLocalesInfo:(CDUnknownBlockType)arg1;
- (void)getLegalDocuments:(CDUnknownBlockType)arg1;
- (void)rebootDevice;
- (void)removeProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)installProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getProfilesInfo:(CDUnknownBlockType)arg1;
- (void)getiCloudInfo:(CDUnknownBlockType)arg1;
- (void)obliterateGizmo:(CDUnknownBlockType)arg1;
- (void)setDeviceName:(id)arg1;
- (void)getAboutInfo:(CDUnknownBlockType)arg1;
- (void)purgeUsageBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getUsage:(CDUnknownBlockType)arg1;
- (void)enableAirplaneMode:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (id)connection;
- (id)protocol;
- (void)dealloc;
- (void)unsafe_invalidate;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

@interface NSSUsageApp : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    unsigned long long _staticSize;
    unsigned long long _dynamicSize;
    unsigned long long _dataSize;
    unsigned long long _totalSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) unsigned long long dynamicSize; // @synthesize dynamicSize=_dynamicSize;
@property(nonatomic) unsigned long long staticSize; // @synthesize staticSize=_staticSize;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

@interface NSSUsageBundle : NSObject <NSSecureCoding>
{
    _Bool _purgeable;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSArray *_categories;
    unsigned long long _totalSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isPurgeable) _Bool purgeable; // @synthesize purgeable=_purgeable;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

@interface NSSUsageBundleCategory : NSObject <NSSecureCoding>
{
    NSString *_name;
    unsigned long long _size;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

