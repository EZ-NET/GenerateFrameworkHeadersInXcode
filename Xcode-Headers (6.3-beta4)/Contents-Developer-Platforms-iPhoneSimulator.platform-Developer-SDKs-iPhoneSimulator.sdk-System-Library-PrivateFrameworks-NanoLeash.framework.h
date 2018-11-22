//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int timeStamp:1;
} CDStruct_a6914f10;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
// UUID: E86320E9-C21F-30FA-98B6-D4547EFFA8A8
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 73.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol CBCentralManagerDelegate <NSObject>
- (void)centralManagerDidUpdateState:(CBCentralManager *)arg1;

@optional
- (void)centralManager:(CBCentralManager *)arg1 didDisconnectPeripheral:(CBPeripheral *)arg2 error:(NSError *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didFailToConnectPeripheral:(CBPeripheral *)arg2 error:(NSError *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didConnectPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didDiscoverPeripheral:(CBPeripheral *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 didRetrieveConnectedPeripherals:(NSArray *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didRetrievePeripherals:(NSArray *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 willRestoreState:(NSDictionary *)arg2;
@end

@protocol CBPeripheralDelegate <NSObject>

@optional
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForDescriptor:(CBDescriptor *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForDescriptor:(CBDescriptor *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverDescriptorsForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateNotificationStateForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristicsForService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverIncludedServicesForService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverServices:(NSError *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didReadRSSI:(NSNumber *)arg2 error:(NSError *)arg3;
- (void)peripheralDidUpdateRSSI:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didModifyServices:(NSArray *)arg2;
- (void)peripheralDidInvalidateServices:(CBPeripheral *)arg1;
- (void)peripheralDidUpdateName:(CBPeripheral *)arg1;
@end

@protocol CBScalablePipeManagerDelegate <NSObject>
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 pipeDidDisconnect:(CBScalablePipe *)arg2 error:(NSError *)arg3;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 pipeDidConnect:(CBScalablePipe *)arg2;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 didUnregisterEndpoint:(NSString *)arg2;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 didRegisterEndpoint:(NSString *)arg2 error:(NSError *)arg3;
- (void)scalablePipeManagerDidUpdateState:(CBScalablePipeManager *)arg1;

@optional
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 pipeClogged:(CBScalablePipe *)arg2 cleanedCompletionHandler:(void (^)(void))arg3;
@end

@protocol IDSServiceDelegate <NSObject>

@optional
- (void)serviceAllowedTrafficClassifiersDidReset:(IDSService *)arg1;
- (void)serviceSpaceDidBecomeAvailable:(IDSService *)arg1;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4 withContext:(NSData *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4 withOptions:(NSDictionary *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 didSendWithSuccess:(_Bool)arg4 error:(NSError *)arg5;
- (void)service:(IDSService *)arg1 nearbyDevicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 devicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 activeAccountsChanged:(NSSet *)arg2;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingResourceAtURL:(NSURL *)arg3 metadata:(NSDictionary *)arg4 fromID:(NSString *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingResourceAtURL:(NSURL *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingUnhandledProtobuf:(IDSProtobuf *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingData:(NSData *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingMessage:(NSDictionary *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
@end

@protocol NFMFindMyController <NSObject>
- (void)playSoundAndFlashRemotely;
- (void)playSoundRemotely;
@end

@protocol NFMWhereIsMyCompanionConnectionProtocol <NSObject>
- (void)playedSoundAndLED:(_Bool)arg1;
- (void)playedSound:(_Bool)arg1;
- (void)applicationIdentifierWithReply:(void (^)(NSString *))arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
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

@interface NFMWiFiManager : NSObject
{
}

+ (id)sharedManager;
- (void)setHoldWiFiAssertion:(_Bool)arg1;

@end

@interface NFMProtoDidPlaySoundAndFlashLEDResponse : PBCodable <NSCopying>
{
    _Bool _didPlay;
}

@property(nonatomic) _Bool didPlay; // @synthesize didPlay=_didPlay;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

@interface NFMLeashManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBScalablePipeManagerDelegate>
{
    CDUnknownBlockType _proximityChangeHandler;
    NSObject<OS_dispatch_queue> *_centralQueue;
    _Bool _testMode;
    _Bool _connected;
    _Bool _needsToScanForPeripheral;
    long long _leashMode;
    NSString *_serviceUUID;
    NSString *_leashIdentifier;
    CBScalablePipeManager *_pipeManager;
    CBScalablePipe *_pipe;
    CBCentralManager *_centralManager;
    CBPeripheral *_peripheral;
    CBPeripheral *_discoveredPeripheral;
    long long _centralPhase;
    id <NFMLLeashBreakDelegate> _leashDelegate;
    NSObject<OS_dispatch_source> *_leashDispatchSourceTimer;
    NSObject<OS_dispatch_queue> *_externalQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *leashDispatchSourceTimer; // @synthesize leashDispatchSourceTimer=_leashDispatchSourceTimer;
@property(nonatomic) __weak id <NFMLLeashBreakDelegate> leashDelegate; // @synthesize leashDelegate=_leashDelegate;
@property(nonatomic) _Bool needsToScanForPeripheral; // @synthesize needsToScanForPeripheral=_needsToScanForPeripheral;
@property(nonatomic) long long centralPhase; // @synthesize centralPhase=_centralPhase;
@property(retain, nonatomic) CBPeripheral *discoveredPeripheral; // @synthesize discoveredPeripheral=_discoveredPeripheral;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) CBScalablePipe *pipe; // @synthesize pipe=_pipe;
@property(retain, nonatomic) CBScalablePipeManager *pipeManager; // @synthesize pipeManager=_pipeManager;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
@property(copy, nonatomic) NSString *leashIdentifier; // @synthesize leashIdentifier=_leashIdentifier;
@property(copy, nonatomic) NSString *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(nonatomic) long long leashMode; // @synthesize leashMode=_leashMode;
- (void).cxx_destruct;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)connect;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
- (void)update:(id)arg1;
- (void)setProximityChangeHandler:(CDUnknownBlockType)arg1;
- (void)stopMonitoringLeash;
- (void)beginMonitoringLeash;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)dealloc;
- (void)leashTest;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface NFMHotterColderView : UIView
{
    _Bool _freshBuffer;
    NFMLeashManager *_leashManager;
    long long _bufferIndex;
    long long _miniBufferIndex;
    UIView *_papaBar;
    UIView *_mamaBar;
    UIView *_babyBar;
    UIView *_graphClippingView;
    GraphView *_graph;
    UILabel *_rssiStats;
}

@property(retain, nonatomic) UILabel *rssiStats; // @synthesize rssiStats=_rssiStats;
@property(retain, nonatomic) GraphView *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) UIView *graphClippingView; // @synthesize graphClippingView=_graphClippingView;
@property(retain, nonatomic) UIView *babyBar; // @synthesize babyBar=_babyBar;
@property(retain, nonatomic) UIView *mamaBar; // @synthesize mamaBar=_mamaBar;
@property(retain, nonatomic) UIView *papaBar; // @synthesize papaBar=_papaBar;
@property(nonatomic) _Bool freshBuffer; // @synthesize freshBuffer=_freshBuffer;
@property(nonatomic) long long miniBufferIndex; // @synthesize miniBufferIndex=_miniBufferIndex;
@property(nonatomic) long long bufferIndex; // @synthesize bufferIndex=_bufferIndex;
@property(retain, nonatomic) NFMLeashManager *leashManager; // @synthesize leashManager=_leashManager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)overrideService;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface NFMProtoDidPlaySoundResponse : PBCodable <NSCopying>
{
    _Bool _didPlay;
}

@property(nonatomic) _Bool didPlay; // @synthesize didPlay=_didPlay;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

@interface NFMProtoPlaySoundRequest : PBRequest <NSCopying>
{
    double _timeStamp;
    CDStruct_a6914f10 _has;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimeStamp;

@end

@interface NFMWhereIsMyCompanionConnection : NSObject <NFMWhereIsMyCompanionConnectionProtocol>
{
    NSXPCConnection *_serverConnection;
    CDUnknownBlockType _playSoundCompletion;
    CDUnknownBlockType _playSoundAndLEDCompletion;
}

+ (id)sharedDeviceConnection;
@property(copy, nonatomic) CDUnknownBlockType playSoundAndLEDCompletion; // @synthesize playSoundAndLEDCompletion=_playSoundAndLEDCompletion;
@property(copy, nonatomic) CDUnknownBlockType playSoundCompletion; // @synthesize playSoundCompletion=_playSoundCompletion;
@property(retain) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
- (void).cxx_destruct;
- (void)applicationIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)playedSoundAndLED:(_Bool)arg1;
- (void)playedSound:(_Bool)arg1;
- (void)playSoundAndLightsOnCompanionWithCompletion:(CDUnknownBlockType)arg1;
- (void)playSoundOnCompanionWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface NFMIDSMessageInstance : NSObject
{
    long long _retryCount;
    double _retryInterval;
    CDUnknownBlockType _retryAction;
}

+ (id)newMessageInstanceWithAction:(CDUnknownBlockType)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3;
@property(copy, nonatomic) CDUnknownBlockType retryAction; // @synthesize retryAction=_retryAction;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (void).cxx_destruct;
- (id)description;

@end

@interface NFMIDSServiceDelegate : NSObject <IDSServiceDelegate>
{
    NSMutableDictionary *_inflightMessages;
    NSMutableDictionary *_pendingMessages;
}

@property(retain, nonatomic) NSMutableDictionary *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(retain, nonatomic) NSMutableDictionary *inflightMessages; // @synthesize inflightMessages=_inflightMessages;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (_Bool)connectionStateWithDevices:(id)arg1 accounts:(id)arg2;
- (id)sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7;
- (void)_enqueueMessage:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7 idsIdentifier:(id)arg8;
- (id)_sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface GraphViewSegment : NSObject
{
    double avghistory[33];
    double rssihistory[33];
    int index;
    CALayer *layer;
}

@property(readonly, nonatomic) CALayer *layer; // @synthesize layer;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)addAvg:(double)arg1 liveRSSI:(double)arg2;
- (_Bool)isVisibleInRect:(struct CGRect)arg1;
- (_Bool)isFull;
- (void)reset;
- (id)init;

@end

@interface GraphTextView : UIView
{
}

- (void)drawRect:(struct CGRect)arg1;

@end

@interface GraphView : UIView
{
    NSMutableArray *_segments;
    GraphViewSegment *_current;
    GraphTextView *_text;
}

@property(retain, nonatomic) GraphTextView *text; // @synthesize text=_text;
@property(nonatomic) GraphViewSegment *current; // @synthesize current=_current;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)drawRect:(struct CGRect)arg1;
- (void)recycleSegment;
- (id)addSegment;
- (void)addAvgRSSI:(double)arg1 actualRSSI:(double)arg2;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface NFMDataLogger : NSObject
{
    _Bool _recordingTelemetry;
    NSOperationQueue *_activityQueue;
    NSOperationQueue *_accelerationQueue;
}

+ (id)sharedLogger;
@property(retain, nonatomic) NSOperationQueue *accelerationQueue; // @synthesize accelerationQueue=_accelerationQueue;
@property(retain, nonatomic) NSOperationQueue *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(nonatomic) _Bool recordingTelemetry; // @synthesize recordingTelemetry=_recordingTelemetry;
- (void).cxx_destruct;
- (void)recordLeashBroke;
- (void)recordLeashed;
- (void)recordUserResponse:(long long)arg1;
- (void)recordRequestedUserResponse;
- (void)recordRSSIStrength:(float)arg1;
- (void)endRecordingTelemetry;
- (void)beginRecordingTelemetry;

@end

@interface NFMProtoPlaySoundAndFlashLEDRequest : PBRequest <NSCopying>
{
    double _timeStamp;
    CDStruct_a6914f10 _has;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimeStamp;

@end

@interface IDSMessageContext (NFMProtoAdditions)
- (id)nfmDescription;
@end

@interface IDSProtobuf (NFMProtoAdditions)
- (id)nfmDescription;
@end

