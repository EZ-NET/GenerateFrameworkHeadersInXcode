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

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct time_value {
    int seconds;
    int microseconds;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/Library/Frameworks/XCTest.framework/XCTest
// UUID: C13E1FA2-F9DC-312A-B215-24EE1BADEE11
//
//                           Arch: x86_64
//                Current version: 6709.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6709.0.0.0.0
//            Minimum iOS version: 6.0.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../../../../../../../SharedFrameworks/
//                               = /Applications/SharedFrameworks
//

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

@protocol NSXPCListenerDelegate <NSObject>

@optional
- (_Bool)listener:(NSXPCListener *)arg1 shouldAcceptNewConnection:(NSXPCConnection *)arg2;
@end

@protocol XCTestDriverInterface
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(NSNumber *)arg1;
- (id)_IDE_startExecutingTestPlanWhenReady;
@end

@protocol XCTestEventGeneratorImpl <NSObject>
- (void)pinchClosedInRect:(struct CGRect)arg1;
- (void)pinchOpenInRect:(struct CGRect)arg1;
- (void)panFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)doubleTapAtPoint:(struct CGPoint)arg1;
- (void)tapAtPoint:(struct CGPoint)arg1;
@end

@protocol XCTestManager_IDEInterface
- (id)_XCT_logMessage:(NSString *)arg1;
- (id)_XCT_testMethod:(NSString *)arg1 ofClass:(NSString *)arg2 didMeasureMetric:(NSDictionary *)arg3 file:(NSString *)arg4 line:(NSNumber *)arg5;
- (id)_XCT_testMethod:(NSString *)arg1 ofClass:(NSString *)arg2 didMeasureValues:(NSArray *)arg3 forPerformanceMetricID:(NSString *)arg4 name:(NSString *)arg5 withUnits:(NSString *)arg6 baselineName:(NSString *)arg7 baselineAverage:(NSNumber *)arg8 maxPercentRegression:(NSNumber *)arg9 maxPercentRelativeStandardDeviation:(NSNumber *)arg10 file:(NSString *)arg11 line:(NSNumber *)arg12;
- (id)_XCT_testCase:(NSString *)arg1 method:(NSString *)arg2 didStallOnMainThreadInFile:(NSString *)arg3 line:(NSNumber *)arg4;
- (id)_XCT_testCaseDidFinishForTestClass:(NSString *)arg1 method:(NSString *)arg2 withStatus:(NSString *)arg3 duration:(NSNumber *)arg4;
- (id)_XCT_testCaseDidFailForTestClass:(NSString *)arg1 method:(NSString *)arg2 withMessage:(NSString *)arg3 file:(NSString *)arg4 line:(NSNumber *)arg5;
- (id)_XCT_testCaseDidStartForTestClass:(NSString *)arg1 method:(NSString *)arg2;
- (id)_XCT_testSuite:(NSString *)arg1 didFinishAt:(NSString *)arg2 runCount:(NSNumber *)arg3 withFailures:(NSNumber *)arg4 unexpected:(NSNumber *)arg5 testDuration:(NSNumber *)arg6 totalDuration:(NSNumber *)arg7;
- (id)_XCT_testSuite:(NSString *)arg1 didStartAt:(NSString *)arg2;
- (id)_XCT_didFinishExecutingTestPlan;
- (id)_XCT_didBeginExecutingTestPlan;
- (id)_XCT_testBundleReadyWithProtocolVersion:(NSNumber *)arg1 minimumVersion:(NSNumber *)arg2;
- (id)_XCT_testBundleReady;
@end

@protocol XCTestManager_ManagerInterface
- (void)_XCT_requestNSXPListenerEndpointFromAuxiliaryFrameworkWithReply:(void (^)(NSXPCListenerEndpoint *, NSString *))arg1;
- (void)_XCT_requestSocketForSessionIdentifier:(NSUUID *)arg1 reply:(void (^)(NSFileHandle *))arg2;
@end

@protocol XCTestManager_TestsInterface
@end

@protocol XCTestObservation <NSObject>

@optional
- (void)testCaseDidFail:(XCTestRun *)arg1 withDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidStop:(XCTestRun *)arg1;
- (void)testCaseDidStart:(XCTestRun *)arg1;
- (void)testSuiteDidFail:(XCTestRun *)arg1 withDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidStop:(XCTestRun *)arg1;
- (void)testSuiteDidStart:(XCTestRun *)arg1;
- (void)stopObserving;
- (void)startObserving;
@end

@interface XCTestDriver : NSObject <XCTestManager_TestsInterface, XCTestDriverInterface>
{
    XCTestSuite *_currentTestSuite;
    CDUnknownBlockType _completionHandler;
    NSXPCConnection *_managerConnection;
    _Bool _connectionInProgress;
    _Bool _waitingToStart;
    _Bool _runningSuite;
    NSObject<OS_dispatch_queue> *_managerQueue;
    NSUUID *_sessionIdentifier;
    NSString *_sessionSocketPath;
    DTXConnection *_IDEConnection;
    id <XCTestManager_IDEInterface> _IDEProxy;
    long long _IDEProtocolVersion;
    int _daemonAvailabilityToken;
}

+ (id)sharedTestDriver;
@property(readonly) long long IDEProtocolVersion; // @synthesize IDEProtocolVersion=_IDEProtocolVersion;
@property(readonly) id <XCTestManager_IDEInterface> IDEProxy; // @synthesize IDEProxy=_IDEProxy;
@property DTXConnection *IDEConnection; // @synthesize IDEConnection=_IDEConnection;
@property(retain) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property XCTestSuite *currentTestSuite; // @synthesize currentTestSuite=_currentTestSuite;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(id)arg1;
- (id)_IDE_startExecutingTestPlanWhenReady;
- (void)runTestSuite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_checkForTestManager;
- (void)_connectToTestManager;
- (void)_checkManagerDaemonStateAndConnectIfAvailable;
- (void)_resetManagerConnection;
- (void)_connectToIDEWithTransport:(id)arg1;
- (void)_runSuite;
- (void)resumeAppSleep:(id)arg1;
- (id)suspendAppSleep;
@property(readonly) id <XCTestManager_ManagerInterface> managerProxy;
- (id)init;

@end

@interface _XCTestDriverTestObserver : NSObject <XCTestObservation>
{
    XCTestRun *_currentTestRun;
}

- (void)stopObserving;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)testCaseDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidStop:(id)arg1;
- (void)testCaseDidStart:(id)arg1;
- (void)testSuiteDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidStop:(id)arg1;
- (void)testSuiteDidStart:(id)arg1;
- (void)startObserving;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XCTestCaseRun : XCTestRun
{
}

- (void)_recordValues:(id)arg1 forPerformanceMetricID:(id)arg2 name:(id)arg3 unitsOfMeasurement:(id)arg4 baselineName:(id)arg5 baselineAverage:(id)arg6 maxPercentRegression:(id)arg7 maxPercentRelativeStandardDeviation:(id)arg8 maxRegression:(id)arg9 maxStandardDeviation:(id)arg10 file:(id)arg11 line:(unsigned long long)arg12;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (void)recordFailureInTest:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 expected:(_Bool)arg5;
- (void)stop;
- (void)start;

@end

@interface XCTestCaseSuite : XCTestSuite
{
    Class _testCaseClass;
}

+ (id)emptyTestSuiteForTestCaseClass:(Class)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithTestCaseClass:(Class)arg1;

@end

@interface XCTestSuite : XCTest
{
    NSString *_name;
    NSMutableArray *_tests;
}

+ (id)defaultTestSuite;
+ (id)allTests;
+ (id)testSuiteForTestCaseClass:(Class)arg1;
+ (id)testSuiteForTestCaseWithName:(id)arg1;
+ (id)testSuiteForBundlePath:(id)arg1;
+ (id)suiteForBundleCache;
+ (void)invalidateCache;
+ (id)_suiteForBundleCache;
+ (id)emptyTestSuiteNamedFromPath:(id)arg1;
+ (id)testSuiteWithName:(id)arg1;
- (void)performTest:(id)arg1;
- (void)_recordUnexpectedFailureForTestRun:(id)arg1 description:(id)arg2 exception:(id)arg3;
- (Class)testRunClass;
- (Class)_requiredTestRunBaseClass;
- (unsigned long long)testCaseCount;
@property(readonly, copy) NSArray *tests;
- (void)addTest:(id)arg1;
- (id)description;
@property(copy) NSString *name;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)removeTestsWithNames:(id)arg1;

@end

@interface _XCTestCaseInterruptionException : NSException
{
}

+ (void)interruptTest;

@end

@interface XCTestCase : XCTest
{
    id _internalImplementation;
}

+ (id)_baselineDictionary;
+ (_Bool)_treatMissingBaselinesAsTestFailures;
+ (id)defaultPerformanceMetrics;
+ (id)testInvocations;
+ (_Bool)isInheritingTestCases;
+ (id)testCaseWithSelector:(SEL)arg1;
+ (id)testCaseWithInvocation:(id)arg1;
+ (void)tearDown;
+ (void)setUp;
+ (id)defaultTestSuite;
+ (id)allTestMethodInvocations;
+ (void)_allTestMethodInvocations:(id)arg1;
+ (id)testMethodInvocations;
+ (id)allSubclasses;
@property _XCTestCaseImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (void)measureMetrics:(id)arg1 automaticallyStartMeasuring:(_Bool)arg2 forBlock:(CDUnknownBlockType)arg3;
- (void)_logAndReportPerformanceMetrics:(id)arg1 perfMetricResultsForIDs:(id)arg2 withBaselinesForTest:(id)arg3 defaultBaselinesForPerfMetricID:(id)arg4;
- (void)_recordValues:(id)arg1 forPerformanceMetricID:(id)arg2 name:(id)arg3 unitsOfMeasurement:(id)arg4 baselineName:(id)arg5 baselineAverage:(id)arg6 maxPercentRegression:(id)arg7 maxPercentRelativeStandardDeviation:(id)arg8 maxRegression:(id)arg9 maxStandardDeviation:(id)arg10 file:(id)arg11 line:(unsigned long long)arg12;
- (id)_symbolicationRecordForTestCodeInAddressStack:(id)arg1;
- (void)measureBlock:(CDUnknownBlockType)arg1;
- (void)stopMeasuring;
- (void)startMeasuring;
- (_Bool)_isMeasuringMetrics;
- (_Bool)_didStopMeasuring;
- (_Bool)_didStartMeasuring;
- (_Bool)_didMeasureMetrics;
- (id)_perfMetricDataForID;
- (unsigned long long)numberOfTestIterationsForTestWithSelector:(SEL)arg1;
- (void)afterTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)beforeTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)tearDownTestWithSelector:(SEL)arg1;
- (void)setUpTestWithSelector:(SEL)arg1;
- (void)performTest:(id)arg1;
- (void)invokeTest;
- (Class)testRunClass;
- (Class)_requiredTestRunBaseClass;
- (void)_recordUnexpectedFailureWithDescription:(id)arg1 exception:(id)arg2;
- (void)_enqueueFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (void)_dequeueFailures;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
@property _Bool continueAfterFailure;
@property(retain) XCTestCaseRun *testCaseRun;
@property(retain) NSInvocation *invocation;
- (void)dealloc;
- (id)description;
- (id)nameForLegacyLogging;
- (id)name;
- (id)languageAgnosticTestMethodName;
- (unsigned long long)testCaseCount;
- (id)initWithSelector:(SEL)arg1;
- (id)initWithInvocation:(id)arg1;
- (id)init;
- (void)_fulfillExpectation:(id)arg1;
- (_Bool)_expectationsHaveBeenFulfilled;
- (id)expectationForNotification:(id)arg1 object:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)keyValueObservingExpectationForObject:(id)arg1 keyPath:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)keyValueObservingExpectationForObject:(id)arg1 keyPath:(id)arg2 expectedValue:(id)arg3;
- (void)waitForExpectationsWithTimeout:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_configureTimeoutForInterval:(double)arg1 forWaitAtAddress:(unsigned long long)arg2 testClassName:(id)arg3 testMethodName:(id)arg4;
- (void)_completeWithResult:(id)arg1;
- (id)expectationWithDescription:(id)arg1;

@end

@interface _XCTestCaseImplementation : NSObject
{
    NSInvocation *_invocation;
    XCTestCaseRun *_testCaseRun;
    _Bool _continueAfterFailure;
    unsigned long long _numberOfTestIterations;
    NSMutableSet *_expectations;
    NSMutableArray *_fulfillments;
    NSObject<OS_dispatch_source> *_timeoutSource;
    double _timeoutDuration;
    _Bool _waiting;
    CDUnknownBlockType _completionHandler;
    NSArray *_performanceMetricIDs;
    NSArray *_activePerformanceMetricIDs;
    NSMutableDictionary *_perfMetricDataForID;
    unsigned long long _startWallClockTime;
    struct time_value _startUserTime;
    struct time_value _startSystemTime;
    unsigned long long _measuringIteration;
    _Bool _isMeasuringMetrics;
    _Bool _didMeasureMetrics;
    _Bool _didStartMeasuring;
    _Bool _didStopMeasuring;
    NSString *_filePathForUnexpectedFailure;
    unsigned long long _lineNumberForUnexpectedFailure;
    unsigned long long _callAddressForCurrentWait;
    XCSymbolicationRecord *_symbolicationRecordForLastCreatedExpectation;
    NSMutableArray *_failureRecords;
}

@property(retain, nonatomic) NSMutableArray *failureRecords; // @synthesize failureRecords=_failureRecords;
@property(nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property(retain, nonatomic) XCSymbolicationRecord *symbolicationRecordForLastCreatedExpectation; // @synthesize symbolicationRecordForLastCreatedExpectation=_symbolicationRecordForLastCreatedExpectation;
@property unsigned long long callAddressForCurrentWait; // @synthesize callAddressForCurrentWait=_callAddressForCurrentWait;
@property unsigned long long lineNumberForUnexpectedFailure; // @synthesize lineNumberForUnexpectedFailure=_lineNumberForUnexpectedFailure;
@property(copy) NSString *filePathForUnexpectedFailure; // @synthesize filePathForUnexpectedFailure=_filePathForUnexpectedFailure;
@property unsigned long long numberOfTestIterations; // @synthesize numberOfTestIterations=_numberOfTestIterations;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property _Bool waiting; // @synthesize waiting=_waiting;
@property(retain, nonatomic) NSMutableArray *fulfillments; // @synthesize fulfillments=_fulfillments;
@property(retain, nonatomic) NSMutableSet *expectations; // @synthesize expectations=_expectations;
@property _Bool didStopMeasuring; // @synthesize didStopMeasuring=_didStopMeasuring;
@property _Bool didStartMeasuring; // @synthesize didStartMeasuring=_didStartMeasuring;
@property _Bool didMeasureMetrics; // @synthesize didMeasureMetrics=_didMeasureMetrics;
@property _Bool isMeasuringMetrics; // @synthesize isMeasuringMetrics=_isMeasuringMetrics;
@property unsigned long long measuringIteration; // @synthesize measuringIteration=_measuringIteration;
@property struct time_value startUserTime; // @synthesize startUserTime=_startUserTime;
@property struct time_value startSystemTime; // @synthesize startSystemTime=_startSystemTime;
@property unsigned long long startWallClockTime; // @synthesize startWallClockTime=_startWallClockTime;
@property(retain) NSMutableDictionary *perfMetricDataForID; // @synthesize perfMetricDataForID=_perfMetricDataForID;
@property(copy) NSArray *activePerformanceMetricIDs; // @synthesize activePerformanceMetricIDs=_activePerformanceMetricIDs;
@property(copy) NSArray *performanceMetricIDs; // @synthesize performanceMetricIDs=_performanceMetricIDs;
@property _Bool continueAfterFailure; // @synthesize continueAfterFailure=_continueAfterFailure;
@property(retain) XCTestCaseRun *testCaseRun; // @synthesize testCaseRun=_testCaseRun;
@property(retain) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void)resetExpectations;
- (void)addExpectation:(id)arg1;
- (id)init;
- (void)dealloc;

@end

@interface XCTestEventGenerator : NSObject
{
    NSXPCConnection *_remoteGeneratorConnection;
}

+ (id)sharedTestEventGenerator;
@property NSXPCConnection *remoteGeneratorConnection; // @synthesize remoteGeneratorConnection=_remoteGeneratorConnection;
- (void)pinchClosedInRect:(struct CGRect)arg1;
- (void)pinchOpenInRect:(struct CGRect)arg1;
- (void)panFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)doubleTapAtPoint:(struct CGPoint)arg1;
- (void)tapAtPoint:(struct CGPoint)arg1;
- (id)generatorImpl;
- (struct CGRect)frameForViewInGlobalCoordinates:(id)arg1;

@end

@interface XCTestObservationCenter : NSObject
{
    NSMutableArray *_observerClasses;
    NSArray *_observers;
    _Bool _isSuspended;
}

+ (id)sharedObservationCenter;
- (void)_testCaseDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)_testCaseDidStop:(id)arg1;
- (void)_testCaseDidStart:(id)arg1;
- (void)_testSuiteDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)_testSuiteDidStop:(id)arg1;
- (void)_testSuiteDidStart:(id)arg1;
- (void)_suspendObservationForBlock:(CDUnknownBlockType)arg1;
- (void)_suspendObservation;
- (void)_resumeObservation;
- (void)_observeTestExecutionForBlock:(CDUnknownBlockType)arg1;
- (void)_tearDownTestObservers;
- (void)_setUpTestObservers;
- (id)_observerClassesFromObserverClassNames:(id)arg1;
- (void)removeTestObserverClass:(Class)arg1;
- (void)addTestObserverClass:(Class)arg1;
- (id)description;
- (id)init;

@end

@interface XCTestEventGeneratorImpl : NSObject <NSXPCListenerDelegate, XCTestEventGeneratorImpl>
{
    struct __IOHIDEventSystemClient *_eventSystemClient;
    NSXPCListener *_listener;
}

+ (id)sharedEventGenerator;
+ (id)listenerEndpoint;
@property NSXPCListener *listener; // @synthesize listener=_listener;
@property struct __IOHIDEventSystemClient *eventSystemClient; // @synthesize eventSystemClient=_eventSystemClient;
- (void)pinchClosedInRect:(struct CGRect)arg1;
- (void)pinchOpenInRect:(struct CGRect)arg1;
- (void)_pinchFromStartPoint1:(struct CGPoint)arg1 startPoint2:(struct CGPoint)arg2 toEndPoint1:(struct CGPoint)arg3 endPoint2:(struct CGPoint)arg4;
- (void)panFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (struct __IOHIDEvent *)_createEventForTouchPhase:(long long)arg1 atScreenLocations:(id)arg2;
- (void)_dispatchEvent:(struct __IOHIDEvent *)arg1 atTime:(double)arg2;
- (void)doubleTapAtPoint:(struct CGPoint)arg1;
- (void)tapAtPoint:(struct CGPoint)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface _XCTStrictBlockScheduler : NSObject
{
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

+ (id)schedulingQueue;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
- (void)atTime:(double)arg1 scheduleBlock:(CDUnknownBlockType)arg2;
- (void)_scheduleNextEvent;
@property NSObject<OS_dispatch_source> *dispatchTimer;

@end

@interface _XCTBlockSchedulingRecord : NSObject
{
    CDUnknownBlockType _block;
    double _timestamp;
}

@property double timestamp; // @synthesize timestamp=_timestamp;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;

@end

@interface XCTestRun : NSObject
{
    XCTest *_test;
    double _startDate;
    double _stopDate;
    unsigned long long _executionCount;
    unsigned long long _failureCount;
    unsigned long long _unexpectedExceptionCount;
}

+ (id)testRunWithTest:(id)arg1;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
@property(readonly) _Bool hasSucceeded;
@property(readonly) unsigned long long testCaseCount;
@property(readonly) unsigned long long unexpectedExceptionCount;
@property(readonly) unsigned long long failureCount;
@property(readonly) unsigned long long totalFailureCount;
@property(readonly) unsigned long long executionCount;
- (void)stop;
- (void)start;
@property(readonly, copy) NSDate *stopDate;
@property(readonly, copy) NSDate *startDate;
@property(readonly) double testDuration;
@property(readonly) double totalDuration;
- (_Bool)_hasBeenStopped;
- (_Bool)_hasBeenStarted;
@property(readonly) XCTest *test;
- (id)description;
- (void)dealloc;
- (id)initWithTest:(id)arg1;

@end

@interface XCTest : NSObject
{
}

+ (id)languageAgnosticTestClassNameForTestClass:(Class)arg1;
@property(readonly) NSString *nameForLegacyLogging;
@property(readonly) NSString *languageAgnosticTestMethodName;
@property(readonly) NSString *languageAgnosticTestClassName;
- (void)tearDown;
- (void)setUp;
- (id)run;
- (void)performTest:(id)arg1;
@property(readonly) Class testRunClass;
@property(readonly) Class _requiredTestRunBaseClass;
@property(readonly, copy) NSString *name;
@property(readonly) unsigned long long testCaseCount;
@property(readonly) NSString *testMethodName;
@property(readonly) NSString *testClassName;
- (void)removeTestsWithNames:(id)arg1;

@end

@interface XCSymbolicationRecord : NSObject
{
    unsigned long long _lineNumber;
    NSString *_filePath;
    NSString *_symbolName;
}

+ (id)symbolicationRecordForAddress:(unsigned long long)arg1;
+ (id)failureRecord;
+ (_Bool)softLinkCoreSymbolication;
@property(copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(copy) NSString *filePath; // @synthesize filePath=_filePath;
@property unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
- (void)dealloc;

@end

@interface XCTestLog : XCTestObserver <XCTestObservation>
{
}

+ (id)_messageForTest:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)testCaseDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)testCaseDidStop:(id)arg1;
- (void)testCaseDidStart:(id)arg1;
- (void)testSuiteDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidStop:(id)arg1;
- (void)testSuiteDidStart:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
- (void)_testDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testLogWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)testLogWithFormat:(id)arg1;
@property(readonly) NSFileHandle *logFileHandle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XCTestSuiteRun : XCTestRun
{
    NSMutableArray *_testRuns;
}

- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (double)testDuration;
- (unsigned long long)unexpectedExceptionCount;
- (unsigned long long)failureCount;
- (unsigned long long)executionCount;
- (void)addTestRun:(id)arg1;
@property(readonly, copy) NSArray *testRuns;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithTest:(id)arg1;

@end

@interface XCTestProbe : NSObject
{
}

+ (void)load;
+ (void)initialize;
+ (void)_applicationFinishedLaunching:(id)arg1;
+ (void)runTests:(id)arg1;
+ (void)exitTests:(int)arg1;
+ (void)resumeAppSleep:(id)arg1;
+ (id)suspendAppSleep;
+ (void)runTestsAtUnitPath:(id)arg1 scope:(id)arg2;
+ (id)specifiedTestSuite;
+ (id)multiTestSuiteForScope:(id)arg1 inverse:(_Bool)arg2;
+ (id)testCaseNamesForScopeNames:(id)arg1;
+ (id)testedBundlePath;
+ (_Bool)isTesting;
+ (_Bool)isInverseTestScope;
+ (id)testScope;
+ (id)_scopeDictionary;
+ (_Bool)isLoadedFromTool;
+ (_Bool)isProcessActingAsTestRig;
+ (_Bool)isLoadedFromApplication;

@end

@interface XCTestObserver : NSObject <XCTestObservation>
{
}

- (void)testCaseDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidStop:(id)arg1;
- (void)testCaseDidStart:(id)arg1;
- (void)testSuiteDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidStop:(id)arg1;
- (void)testSuiteDidStart:(id)arg1;
- (void)stopObserving;
- (void)startObserving;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XCTestExpectation : NSObject
{
    id _internalImplementation;
}

+ (id)expectationForTestCase:(id)arg1 withDescription:(id)arg2;
@property(readonly) _XCTestExpectationImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (void)cleanup;
- (void)fulfill;
- (id)description;
- (id)_initForTestCase:(id)arg1 withDescription:(id)arg2;
- (void)dealloc;

@end

@interface _XCTestExpectationImplementation : NSObject
{
    _Bool _hasCompleted;
    XCTestCase *_testCase;
    NSString *_expectationDescription;
}

@property(copy) NSString *expectationDescription; // @synthesize expectationDescription=_expectationDescription;
@property XCTestCase *testCase; // @synthesize testCase=_testCase;
@property _Bool hasCompleted; // @synthesize hasCompleted=_hasCompleted;
- (void)dealloc;

@end

@interface _XCKVOExpectation : XCTestExpectation
{
    id _observedObject;
    NSString *_keyPath;
    id _expectedValue;
    CDUnknownBlockType _handler;
    _Bool _hasUnregistered;
}

@property _Bool hasUnregistered; // @synthesize hasUnregistered=_hasUnregistered;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain) id expectedValue; // @synthesize expectedValue=_expectedValue;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain) id observedObject; // @synthesize observedObject=_observedObject;
- (void)dealloc;
- (void)cleanup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_safelyUnregister;
- (void)startObserving;

@end

@interface _XCNotificationExpectation : XCTestExpectation
{
    id _observedObject;
    NSString *_notificationName;
    CDUnknownBlockType _handler;
}

@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(retain) id observedObject; // @synthesize observedObject=_observedObject;
- (void)_observeExpectedNotification:(id)arg1;
- (void)cleanup;
- (void)startObserving;
- (void)dealloc;

@end

@interface NSObject (ClassDescription_Extras)
- (id)className;
@end

@interface NSValue (UIKit_Duplicates)
+ (id)_xct_valueWithCGPoint:(struct CGPoint)arg1;
- (struct CGPoint)_xct_CGPointValue;
@end

@interface NSValue (XCTestAdditions)
- (id)xct_contentDescription;
@end

