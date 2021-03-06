//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
// UUID: 3ECD3DB1-F423-33B2-84E7-BF25F39F1F70
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 77.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol AITXPCConnectionDelegate <NSObject>
- (void)xpcConnectionFailed:(AITXPCConnection *)arg1;
- (void)xpcConnectionUnhandledMessage:(NSObject<OS_xpc_object> *)arg1;
- (void)xpcConnection:(AITXPCConnection *)arg1 receivedMessage:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
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

@interface AITTarget : NSObject <AITXPCConnectionDelegate>
{
    int _notifyToken;
    NSMutableDictionary *_observerRecords;
    AITXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _startTime;
    NSMutableArray *_queuedProbes;
    NSObject<OS_dispatch_queue> *_rpcDispatchQueue;
    NSString *_rpcSelectorPrefix;
    id _rpcTarget;
    NSObject<OS_dispatch_source> *_watchdogSource;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedTarget;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnectionUnhandledMessage:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)_sendAckForToken:(id)arg1 success:(_Bool)arg2 returnValue:(id)arg3 details:(id)arg4;
- (void)_flushQueuedProbes;
- (void)_probeBarrier:(CDUnknownBlockType)arg1;
- (void)_fireProbe:(id)arg1 withArgumentDictionary:(id)arg2;
- (_Bool)_probeIsEnabled:(id)arg1;
@property(nonatomic) NSObject<OS_dispatch_queue> *rpcDispatchQueue;
@property(copy, nonatomic) NSString *rpcSelectorPrefix;
@property(retain, nonatomic) id rpcTarget;
- (id)_rpcTarget;
- (void)removeObserver:(id)arg1 forMessage:(id)arg2;
- (void)addObserver:(id)arg1 forMessage:(id)arg2 dispatchQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_setupXPCConnectionIfNeeded;
- (_Bool)_appIsWhitelisted;
- (void)_setupWatchdog;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface AITTargetObserverRecord : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    id _observer;
}

+ (id)recordForObserver:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(readonly) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) id observer; // @synthesize observer=_observer;
- (void)dealloc;

@end

@interface AITXPCConnection : NSObject
{
    int _pid;
    id <AITXPCConnectionDelegate> _delegate;
    NSString *_bundleId;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_currentMessage;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property(nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) NSObject<OS_xpc_object> *currentMessage; // @synthesize currentMessage=_currentMessage;
@property(nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) id <AITXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic) _Bool available;
- (void)barrierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)_handleEvent:(id)arg1;
- (id)_deserializeMessage:(id)arg1;
- (void)closeConnection;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

@end

