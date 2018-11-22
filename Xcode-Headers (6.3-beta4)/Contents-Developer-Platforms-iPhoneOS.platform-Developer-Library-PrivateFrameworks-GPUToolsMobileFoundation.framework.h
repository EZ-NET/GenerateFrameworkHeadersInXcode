//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/Library/PrivateFrameworks/GPUToolsMobileFoundation.framework/Versions/A/GPUToolsMobileFoundation
// UUID: BB6DB111-4B74-3F8B-AD78-B9A2DE0BFF0A
//
//                           Arch: x86_64
//                Current version: 16739.0.0
//          Compatibility version: 1.0.0
//                 Source version: 16739.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface DYMobileDevice : DYDevice
{
    unsigned long long _appServiceTransportTimestamp;
    struct _AMDevice *_device;
    struct _AMDevice *_secondaryDevice;
    struct dispatch_queue_s *_queue;
    struct dispatch_queue_s *_requestsQueue;
    struct dispatch_queue_s *_connectedWaitQueue;
    NSMutableDictionary *_attributesCache;
    DYTransport *_appServiceTransport;
    struct dispatch_queue_s *_appServiceTransportQueue;
    unsigned int _appServiceTransportReservations;
    NSURL *_cachedDeveloperDiskImageURL;
    NSURL *_cachedSymbolsDirectoryURL;
    NSError *_gputoolsServiceAvailabilityError;
    BOOL _gputoolsServiceAvailable;
}

+ (id)replayerAppIdentifier;
+ (Class)controlStrategyClass;
+ (Class)deferredLaunchStrategyClass;
+ (Class)launchStrategyClass;
+ (void)initialize;
- (id)gputoolsServiceAvailabilityError;
- (BOOL)gputoolsServiceAvailable;
- (void).cxx_destruct;
- (id)streamArchiveAtURL:(id)arg1 destinationName:(id)arg2;
- (id)iconDataForApplicationIdentifiers:(id)arg1;
- (id)mobileReplayerGuestApp;
- (id)guestAppWithPath:(id)arg1;
- (id)guestAppWithIdentifier:(id)arg1;
- (id)installedApplications;
- (void)_releaseAppServiceTransportReservation;
- (BOOL)_takeAppServiceTransportReservation:(id *)arg1;
- (void)_shutdownAppServiceTransport;
- (id)startService:(id)arg1;
- (void)_performStartService:(id)arg1 future:(id)arg2;
- (id)createTransport;
- (id)mountDeveloperDiskImage;
- (id)attributeForDomain:(struct __CFString *)arg1 key:(struct __CFString *)arg2;
- (void)_getAttributeForDomain:(struct __CFString *)arg1 key:(struct __CFString *)arg2 future:(id)arg3;
- (id)deviceInfo;
@property(readonly, nonatomic) NSString *amdIdentifier; // @dynamic amdIdentifier;
@property(readonly, nonatomic) BOOL developmentDevice; // @dynamic developmentDevice;
- (BOOL)_cachedIsDevelopmentDevice;
- (id)productType;
- (id)build;
- (id)version;
- (id)name;
- (id)symbolsDirectoryURL;
- (id)developerDiskImageURL;
- (void)_cacheDeveloperDiskImageURL;
- (id)refreshDeviceProperties;
- (void)_checkGPUToolsServiceAvailability;
- (void)_checkGPUToolsServiceAvailabilityInner;
- (BOOL)_cacheCommonAttributes:(id *)arg1;
- (BOOL)_cacheAttributeWithDomain:(struct __CFString *)arg1 key:(struct __CFString *)arg2;
- (id)_getAttribCacheKeyForDomain:(struct __CFString *)arg1 key:(struct __CFString *)arg2;
- (BOOL)_runInSession:(CDUnknownBlockType)arg1;
- (BOOL)_startSession:(id *)arg1;
- (void)_stopSession;
- (id)connectedFuture;
- (void)waitUntilConnected;
@property(readonly, nonatomic) BOOL connected; // @dynamic connected;
- (void)setSecondaryAppleMobileDevice:(struct _AMDevice *)arg1;
- (void)setAppleMobileDevice:(struct _AMDevice *)arg1;
- (struct _AMDevice *)secondaryAppleMobileDevice;
- (struct _AMDevice *)appleMobileDevice;
- (id)description;
- (void)dealloc;
- (id)initWithAMDIdentifier:(id)arg1;
- (id)init;

@end

@interface DYMobileDeviceManager : NSObject
{
    struct _AMDeviceNotificationContext *_deviceNotificationRef;
    NSMapTable *_deviceMap;
    NSMapTable *_observersMap;
    int _lock;
}

+ (id)sharedMobileDeviceManager;
- (void).cxx_destruct;
- (id)faultDeviceForAMDIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)notifyOnQueue:(struct dispatch_queue_s *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)connectedDevices;
- (id)_connectedDevicesInner;
- (id)allDevices;
- (void)dealloc;
- (id)init;
- (void)_deviceNotificationThread:(id)arg1;
- (void)_handleDeviceDetached:(struct _AMDevice *)arg1;
- (void)_handleDeviceAttached:(struct _AMDevice *)arg1;
- (struct _AMDevice *)_optimalDevice:(struct _AMDevice *)arg1 rhs:(struct _AMDevice *)arg2;
- (void)_observeDeviceNotifications:(id)arg1;
- (void)_handleDeviceNotification:(id)arg1 device:(id)arg2;
- (void)_broadcastEvent:(int)arg1 device:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DYMobileLaunchStrategy : DYBaseMobileLaunchStrategy
{
}

- (id)performLaunch:(id)arg1 connectFuture:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DYMobileDeviceTransport : DYBaseSocketTransport
{
    DYMobileDevice *_device;
    struct _AMDServiceConnection *_servConn;
    void *_ssl;
}

@property(readonly, nonatomic) DYMobileDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)connect;
- (void)closeSocketDescriptor;
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithMobileDevice:(id)arg1;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface DYMobileServiceConnection : NSObject
{
    struct _AMDServiceConnection *_connection;
}

@property(readonly, nonatomic) struct _AMDServiceConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (id)initWithServiceConnection:(struct _AMDServiceConnection *)arg1;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface DYSimulatorLaunchStrategy : DYBaseSimulatorLaunchStrategy
{
}

- (id)performLaunch:(id)arg1 connectFuture:(id)arg2;
- (void)_performLaunchXPC:(id)arg1 launchFuture:(id)arg2;
- (void)_performLaunchLocal:(id)arg1 launchFuture:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DYMobileSymbolicator : DYSymbolicator
{
}

- (id)initWithCoreSymbolicator:(struct _CSTypeRef)arg1 rootPaths:(id)arg2 device:(id)arg3;

@end

__attribute__((visibility("hidden")))
@interface DYMobileApp : DYGuestApp
{
    NSString *_originDeviceIdentifier;
    NSString *_genre;
    NSArray *_subgenres;
}

@property(copy, nonatomic) NSArray *subgenres; // @synthesize subgenres=_subgenres;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *originDeviceIdentifier; // @synthesize originDeviceIdentifier=_originDeviceIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface DYBaseMobileLaunchStrategy : DYGuestAppLaunchStrategy
{
}

- (void)registerInferiorPid:(int)arg1;

@end

__attribute__((visibility("hidden")))
@interface DYSimulatorDeferredLaunchStrategy : DYBaseSimulatorLaunchStrategy
{
}

- (id)performLaunch:(id)arg1 connectFuture:(id)arg2;

@end

@interface DYSimulatorDevice : DYDevice
{
    DYSimulatorDaemonInstance *_daemon;
    NSString *_sdkRoot;
}

+ (id)replayerAppIdentifier;
+ (Class)controlStrategyClass;
+ (Class)deferredLaunchStrategyClass;
+ (Class)launchStrategyClass;
+ (void)initialize;
@property(readonly, nonatomic) NSString *sdkRoot; // @synthesize sdkRoot=_sdkRoot;
@property(retain, nonatomic) DYSimulatorDaemonInstance *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (BOOL)supportsPlaybackOfCaptureWithInfo:(id)arg1 limitBackwardsCompatibility:(BOOL)arg2 isInternal:(BOOL)arg3;
- (id)iconDataForApplicationIdentifiers:(id)arg1;
- (id)gputoolsServiceAvailabilityError;
- (BOOL)gputoolsServiceAvailable;
- (id)mobileReplayerGuestApp;
- (id)guestAppWithPath:(id)arg1;
- (id)guestAppWithIdentifier:(id)arg1;
- (id)guestAppWithURL:(id)arg1;
- (id)initWithRootPath:(id)arg1;
- (id)init;

@end

@interface DYSimulatorDeviceManager : NSObject
{
    DYSimulatorRootsObserver *_simulatorRootsObserver;
    NSMapTable *_deviceMap;
    NSMapTable *_daemonInstances;
    NSMapTable *_observersMap;
    struct dispatch_queue_s *_queue;
    int _lock;
}

+ (id)sharedSimulatorDeviceManager;
- (void).cxx_destruct;
- (id)faultDeviceForSDKRootPath:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)notifyOnQueue:(struct dispatch_queue_s *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)allDevices;
- (id)_allDevicesInner;
- (void)dealloc;
- (id)init;
- (void)_registerSimulatorEnvironment:(id)arg1;
- (void)_sendLoadEnvironmentMessage:(id)arg1;
- (void)_registerSimulatorRoot:(id)arg1 daemon:(id)arg2;
- (void)_broadcastEvent:(int)arg1 device:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DYMobileDeferredLaunchStrategy : DYBaseMobileLaunchStrategy
{
}

- (id)performLaunch:(id)arg1 connectFuture:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DYSimulatorDaemonInstance : NSObject
{
    struct _xpc_connection_s *_connection;
    NSString *_xcodePath;
}

@property(readonly, nonatomic) NSString *xcodePath; // @synthesize xcodePath=_xcodePath;
@property(readonly, nonatomic) struct _xpc_connection_s *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithXcodePath:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface DYMobileControlStrategy : DYGuestAppControlStrategy
{
}

+ (Class)symbolicatorClass;
- (void)bringToForeground;
- (void)sendToBackground;
- (void)terminate;
- (void)resume;

@end

__attribute__((visibility("hidden")))
@interface DYSimulatorControlStrategy : DYLocalControlStrategy
{
}

- (void)createSymbolicator:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface DYSimulatorRootsObserver : NSObject
{
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithLoadPlatforms:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;

@end

@interface DYSimulatorSession : NSObject
{
    NSDictionary *_launchDictionary;
    CDUnknownBlockType _didStartBlock;
    CDUnknownBlockType _didEndBlock;
    DTiPhoneSimulatorSession *_dtSession;
}

@property(readonly, nonatomic) DTiPhoneSimulatorSession *dtSession; // @synthesize dtSession=_dtSession;
@property(copy, nonatomic) CDUnknownBlockType didEndBlock; // @synthesize didEndBlock=_didEndBlock;
@property(copy, nonatomic) CDUnknownBlockType didStartBlock; // @synthesize didStartBlock=_didStartBlock;
- (void).cxx_destruct;
- (void)session:(id)arg1 didEndWithError:(id)arg2;
- (void)session:(id)arg1 didStart:(BOOL)arg2 withError:(id)arg3;
- (BOOL)launch:(id *)arg1;
- (void)_resetIvars;
- (void)invalidate;
- (id)initWithLaunchDictionary:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface DYBaseSimulatorLaunchStrategy : DYBaseLocalLaunchStrategy
{
}

+ (id)interposingDylibPath;
+ (double)launchTimeout;

@end

__attribute__((visibility("hidden")))
@interface DYMobileSupportError : NSError
{
}

- (id)localizedDescription;

@end
