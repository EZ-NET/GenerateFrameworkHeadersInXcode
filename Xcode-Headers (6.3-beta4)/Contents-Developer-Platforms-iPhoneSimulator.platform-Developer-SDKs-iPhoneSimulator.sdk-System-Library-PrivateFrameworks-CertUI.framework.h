//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CertUI.framework/CertUI
// UUID: 5F78306F-451B-33BA-AF33-C253511D7E75
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 87.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface CertUIConnectionDelegate : NSObject
{
    CertUITrustManager *_trustManager;
    id _forwardingDelegate;
    NSString *_connectionDisplayName;
    struct {
        unsigned int canAuthenticateAgainstProtectionSpace:1;
        unsigned int didReceiveAuthenticationChallenge:1;
    } _delegateRespondsTo;
}

+ (id)defaultServiceForProtocol:(id)arg1;
@property(copy, nonatomic) NSString *connectionDisplayName; // @synthesize connectionDisplayName=_connectionDisplayName;
@property(nonatomic) __weak id forwardingDelegate; // @synthesize forwardingDelegate=_forwardingDelegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)_continueConnectionWithResponse:(int)arg1 challenge:(id)arg2 service:(id)arg3;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

@end

@interface CertUITrustManager : NSObject
{
    NSString *_access;
}

+ (id)defaultTrustManager;
+ (void)migrateFromVersionOne;
+ (void)migrateFromVersionZero;
+ (void)_migrateVersionZeroFromAccessGroup:(id)arg1 toGroup:(id)arg2;
- (void).cxx_destruct;
- (void)removeAllTrusts;
- (void)removeSMIMETrust:(struct __SecTrust *)arg1 sender:(id)arg2;
- (void)removeSSLTrust:(struct __SecTrust *)arg1 hostname:(id)arg2 service:(id)arg3;
- (void)addSMIMETrust:(struct __SecTrust *)arg1 sender:(id)arg2;
- (void)addSSLTrust:(struct __SecTrust *)arg1 hostname:(id)arg2 service:(id)arg3;
- (int)actionForSMIMETrust:(struct __SecTrust *)arg1 sender:(id)arg2;
- (int)actionForSSLTrust:(struct __SecTrust *)arg1 hostname:(id)arg2 service:(id)arg3;
- (int)_actionForTrust:(struct __SecTrust *)arg1 exceptions:(id)arg2;
- (id)init;
- (id)initWithAccessGroup:(id)arg1;
- (void)clearSavedTrustSettingsForTrust:(struct __SecTrust *)arg1 host:(id)arg2 service:(id)arg3;
- (void)allowTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 service:(id)arg3;
- (int)actionForTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 andService:(id)arg3;
- (_Bool)_hasExceptionsForSMIMETrust:(struct __SecTrust *)arg1 sender:(id)arg2;

@end

@interface CertUIPrompt : NSObject
{
    struct __SecTrust *_trust;
    NSString *_host;
    NSString *_service;
    NSString *_connectionDisplayName;
    CDUnknownBlockType _responseBlock;
}

+ (id)promptQueue;
+ (id)stringForResponse:(int)arg1;
@property(copy, nonatomic) NSString *connectionDisplayName; // @synthesize connectionDisplayName=_connectionDisplayName;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (int)showAndWaitForResponse;
- (void)_informConsumerOfResponse:(int)arg1;
- (void)showPromptWithResponseBlock:(CDUnknownBlockType)arg1;
- (int)_sendRemoteMessage;
- (int)_responseFromReplyDict:(id)arg1;
- (id)_messagingCenter;
- (id)_newUserInfoForDisplayName:(id)arg1 hostname:(id)arg2 trust:(struct __SecTrust *)arg3;
- (id)_digestFromTrust:(struct __SecTrust *)arg1;
- (_Bool)_isRootCertificateFromTrust:(struct __SecTrust *)arg1;
- (id)_expirationFromTrust:(struct __SecTrust *)arg1;
- (id)_purposeFromTrustProperties:(id)arg1;
- (id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3;
- (id)_subtitleFromTrust:(struct __SecTrust *)arg1;
- (id)_issuerFromTrust:(struct __SecTrust *)arg1;
- (id)_titleFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (struct __SecTrust *)trust;
- (void)setTrust:(struct __SecTrust *)arg1;
- (id)description;
- (void)dealloc;

@end

