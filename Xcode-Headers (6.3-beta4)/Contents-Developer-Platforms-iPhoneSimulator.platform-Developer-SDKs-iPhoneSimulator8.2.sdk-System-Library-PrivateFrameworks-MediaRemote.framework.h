//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
// UUID: 8162DB15-4A64-3585-92B3-9F5A6707AC87
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 322.4.29.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

__attribute__((visibility("hidden")))
@interface MRNowPlayingAppDidChangeNotificationObserver : MSVDistributedNotificationObserver
{
}

+ (id)observerWithQueue:(id)arg1;
- (id)userInfoForLocalNotification;
- (id)initWithQueue:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface MRNowPlayingAppIsPlayingDidChangeNotificationObserver : MSVDistributedNotificationObserver
{
}

+ (id)observerWithQueue:(id)arg1;
- (id)userInfoForLocalNotification;
- (id)initWithQueue:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface MRExternalScreenTypeDidChangeNotificationObserver : MSVDistributedNotificationObserver
{
}

+ (id)observerWithQueue:(id)arg1;
- (id)userInfoForLocalNotification;
- (id)initWithQueue:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _registeredNowPlayingObservers;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    _Bool _receivesExternalScreenTypeChangedNotifications;
    _Bool _receivesSupportedCommandsNotifications;
    _Bool _receivesRoutesChangedNotifications;
    _Bool _receivesOriginChangedNotifications;
    _Bool _receivesPlaybackErrorNotifications;
    NSArray *_nowPlayingNotificationObservers;
    NSArray *_routingNotificationObservers;
    NSArray *_originNotificationObservers;
    struct MRMediaRemoteService *_service;
    NSArray *_externalScreenTypeNotificationObservers;
}

+ (id)sharedServiceClient;
@property(retain, nonatomic) NSArray *externalScreenTypeNotificationObservers; // @synthesize externalScreenTypeNotificationObservers=_externalScreenTypeNotificationObservers;
@property(nonatomic) _Bool receivesPlaybackErrorNotifications; // @synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications;
@property(nonatomic) _Bool receivesOriginChangedNotifications; // @synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications;
@property(nonatomic) _Bool receivesRoutesChangedNotifications; // @synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications;
@property(nonatomic) _Bool receivesSupportedCommandsNotifications; // @synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications;
@property(nonatomic) _Bool receivesExternalScreenTypeChangedNotifications; // @synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications;
@property(readonly, nonatomic) struct MRMediaRemoteService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSArray *originNotificationObservers; // @synthesize originNotificationObservers=_originNotificationObservers;
@property(retain, nonatomic) NSArray *routingNotificationObservers; // @synthesize routingNotificationObservers=_routingNotificationObservers;
@property(retain, nonatomic) NSArray *nowPlayingNotificationObservers; // @synthesize nowPlayingNotificationObservers=_nowPlayingNotificationObservers;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterAllOrigins;
- (_Bool)unregisterOrigin:(struct _MROrigin *)arg1;
- (_Bool)registerOrigin:(struct _MROrigin *)arg1;
- (void)unregisterForNowPlayingNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
@property(readonly, nonatomic) NSArray *registeredOrigins;
@property(readonly, nonatomic, getter=isRegisteredForNowPlayingNotifications) _Bool registeredForNowPlayingNotifications;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
- (void)dealloc;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface MRAVRoutingClientController : NSObject
{
    struct MRMediaRemoteService *_mediaRemoteService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_pendingCompletionHandlersForCategories;
    NSMutableDictionary *_cachedRoutesForCategories;
}

@property(readonly, nonatomic) struct MRMediaRemoteService *mediaRemoteService; // @synthesize mediaRemoteService=_mediaRemoteService;
- (void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2;
- (void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)fetchPickableRoutesForCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithMediaRemoteService:(struct MRMediaRemoteService *)arg1;
- (id)init;

@end

@interface MRNowPlayingArtwork : NSObject
{
}

+ (id)nowPlayingArtworkFromXPCDictionary:(id)arg1;
- (id)copyImageData;
- (void)bindToXPCDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool hasArtworkData;
@property(readonly, nonatomic) unsigned int type;

@end

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork
{
    NSData *_imageData;
    NSString *_mimeType;
}

@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)copyImageData;
- (void)bindToXPCDictionary:(id)arg1;
- (_Bool)hasArtworkData;
- (unsigned int)type;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface MRMediaRemoteOriginClient : NSObject
{
    _Bool _canBeNowPlayingApp;
    _Bool _isOverrideApp;
    _Bool _keepAlive;
    CDUnknownBlockType _commandHandlerBlock;
    NSMutableDictionary *_commandHandlerBlocks;
    int _notifyRestoreClientStateForLaunch;
    int _notifyDidLaunchToken;
    NSDictionary *_nowPlayingInfo;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    struct _MROrigin *_origin;
    unsigned int _routeDiscoveryMode;
    CDUnknownBlockType _playbackStateRequestHandler;
}

@property(copy, nonatomic) CDUnknownBlockType playbackStateRequestHandler; // @synthesize playbackStateRequestHandler=_playbackStateRequestHandler;
@property(nonatomic) unsigned int routeDiscoveryMode; // @synthesize routeDiscoveryMode=_routeDiscoveryMode;
@property(readonly, nonatomic) struct _MROrigin *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(retain, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork; // @synthesize nowPlayingArtwork=_nowPlayingArtwork;
@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) _Bool isOverrideApp; // @synthesize isOverrideApp=_isOverrideApp;
@property(nonatomic) _Bool canBeNowPlayingApp; // @synthesize canBeNowPlayingApp=_canBeNowPlayingApp;
- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *commandHandlerBlocks;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)addCommandHandlerBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithOrigin:(struct _MROrigin *)arg1;

@end

__attribute__((visibility("hidden")))
@interface MRMediaRemoteOriginClientManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_originClients;
}

+ (id)sharedManager;
- (id)clientForOrigin:(struct _MROrigin *)arg1;
- (id)localClient;
- (void)dealloc;
- (id)init;

@end

@interface NSDictionary (MRMediaRemoteAdditions)
- (_Bool)MR_isEqualToNowPlayingInfo:(id)arg1;
@end

