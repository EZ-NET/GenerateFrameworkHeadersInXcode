//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PushKit.framework/PushKit
// UUID: 21FC6744-3500-3788-B377-6EC78F19213F
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 3.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol PKVoIPXPCClient
- (void)voipPayloadReceived:(NSDictionary *)arg1;
- (void)voipRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional
- (void)voipRegistrationFailed;
@end

@protocol PKVoIPXPCServer
- (void)voipUnregister;
- (void)voipRegister;
@end

@interface PKPushRegistry : NSObject <PKVoIPXPCClient>
{
    NSSet *_desiredPushTypes;
    id <PKPushRegistryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pushTypeToToken;
    NSMutableDictionary *_pushTypeToConnection;
}

+ (id)pushTypeToMachServiceName;
@property(retain, nonatomic) NSMutableDictionary *pushTypeToConnection; // @synthesize pushTypeToConnection=_pushTypeToConnection;
@property(retain, nonatomic) NSMutableDictionary *pushTypeToToken; // @synthesize pushTypeToToken=_pushTypeToToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <PKPushRegistryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createConnectionForPushType:(id)arg1;
- (void)unregisterForPushType:(id)arg1;
- (void)registerForPushType:(id)arg1;
- (void)voipRegistrationFailed;
- (void)voipPayloadReceived:(id)arg1;
- (void)voipRegistrationSucceededWithDeviceToken:(id)arg1;
- (id)pushTokenForType:(id)arg1;
- (id)initWithQueue:(id)arg1;
@property(copy) NSSet *desiredPushTypes; // @synthesize desiredPushTypes=_desiredPushTypes;

@end

@interface PKPushCredentials : NSObject
{
    NSString *_type;
    NSData *_token;
}

@property(copy) NSData *token; // @synthesize token=_token;
@property(copy) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

@interface PKPushPayload : NSObject
{
    NSString *_type;
    NSDictionary *_dictionaryPayload;
}

@property(copy) NSDictionary *dictionaryPayload; // @synthesize dictionaryPayload=_dictionaryPayload;
@property(copy) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

