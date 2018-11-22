//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Breakpoint;

struct BreakpointLocation;

struct Broadcaster;

struct Debugger;

struct Error;

struct Event;

struct ExecutionContextRef;

struct Module;

struct Process;

struct QueueImpl;

struct QueueItem;

struct SBBreakpoint {
    struct shared_ptr<lldb_private::Breakpoint> _field1;
};

struct SBBreakpointLocation {
    struct shared_ptr<lldb_private::BreakpointLocation> _field1;
};

struct SBBroadcaster {
    struct shared_ptr<lldb_private::Broadcaster> _field1;
    struct Broadcaster *_field2;
};

struct SBDebugger {
    struct shared_ptr<lldb_private::Debugger> m_opaque_sp;
};

struct SBError {
    struct unique_ptr<lldb_private::Error, std::__1::default_delete<lldb_private::Error>> _field1;
};

struct SBEvent {
    struct shared_ptr<lldb_private::Event> _field1;
    struct Event *_field2;
};

struct SBFrame {
    struct shared_ptr<lldb_private::ExecutionContextRef> m_opaque_sp;
};

struct SBModule {
    struct shared_ptr<lldb_private::Module> m_opaque_sp;
};

struct SBProcess {
    struct weak_ptr<lldb_private::Process> m_opaque_wp;
};

struct SBQueue {
    struct shared_ptr<lldb_private::QueueImpl> m_opaque_sp;
};

struct SBQueueItem {
    struct shared_ptr<lldb_private::QueueItem> m_queue_item_sp;
};

struct SBTarget {
    struct shared_ptr<lldb_private::Target> m_opaque_sp;
};

struct SBThread {
    struct shared_ptr<lldb_private::ExecutionContextRef> m_opaque_sp;
};

struct SBType {
    struct shared_ptr<lldb_private::TypeImpl> m_opaque_sp;
};

struct SBValue {
    struct shared_ptr<ValueImpl> m_opaque_sp;
};

struct SBValueList {
    struct unique_ptr<ValueListImpl, std::__1::default_delete<ValueListImpl>> m_opaque_ap;
};

struct Target;

struct TypeImpl;

struct ValueImpl;

struct ValueListImpl;

struct __shared_weak_count;

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct auto_ptr<lldb::SBBroadcaster> {
    struct SBBroadcaster *__ptr_;
};

struct shared_ptr<ValueImpl> {
    struct ValueImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Breakpoint> {
    struct Breakpoint *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<lldb_private::BreakpointLocation> {
    struct BreakpointLocation *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<lldb_private::Broadcaster> {
    struct Broadcaster *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<lldb_private::Debugger> {
    struct Debugger *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Event> {
    struct Event *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<lldb_private::ExecutionContextRef> {
    struct ExecutionContextRef *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Module> {
    struct Module *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::QueueImpl> {
    struct QueueImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::QueueItem> {
    struct QueueItem *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Target> {
    struct Target *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::TypeImpl> {
    struct TypeImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<ValueListImpl, std::__1::default_delete<ValueListImpl>> {
    struct __compressed_pair<ValueListImpl *, std::__1::default_delete<ValueListImpl>> {
        struct ValueListImpl *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::Error, std::__1::default_delete<lldb_private::Error>> {
    struct __compressed_pair<lldb_private::Error *, std::__1::default_delete<lldb_private::Error>> {
        struct Error *_field1;
    } _field1;
};

struct weak_ptr<lldb_private::Process> {
    struct Process *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/DebuggerLLDB.ideplugin/Contents/MacOS/DebuggerLLDB
// UUID: F00DB9AB-B3B0-31E6-95F4-E5E79C3A9BEA
//
//                           Arch: x86_64
//                Current version: 6751.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6751.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../../SharedFrameworks
//                               = /Applications/Xcode.app/Contents/SharedFrameworks
//

@protocol DBGDebugSessionBreakpointLifeCycleDelegate
- (void)watchpointEnablementChanged:(IDEWatchpoint *)arg1;
- (void)breakpointLocationEnablementChanged:(IDEBreakpointLocation *)arg1;
- (void)breakpointLocationIgnoreCount:(IDEBreakpointLocation *)arg1;
- (void)breakpointLocationConditionChanged:(IDEBreakpointLocation *)arg1;
- (void)breakpointEnablementChanged:(IDEBreakpoint *)arg1;
- (void)breakpointIgnoreCountChanged:(IDEBreakpoint *)arg1;
- (void)breakpointConditionChanged:(IDEBreakpoint *)arg1;
- (void)deleteWatchpoint:(IDEWatchpoint *)arg1;
- (void)activationStateChanged:(BOOL)arg1 forBreakpoints:(NSArray *)arg2;
- (void)deleteBreakpoint:(IDEBreakpoint *)arg1;
- (void)createBreakpointIfNecessary:(IDEBreakpoint *)arg1;
@end

@protocol DBGLLDBInvalidation <NSObject>
@property BOOL markedForInvalidationFromTheSessionThread;
@end

@protocol DVTCancellable <NSObject>
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)cancel;
@end

@protocol IDEConsoleAdaptorDelegateProtocol

@optional
- (NSString *)parseConsoleOutputFromOriginalOutput:(NSString *)arg1;
- (NSString *)parseConsoleInputFromOriginalInput:(NSString *)arg1;
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
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

__attribute__((visibility("hidden")))
@interface DBGLLDBCodeModule : DBGCodeModule
{
    struct SBModule _lldbModule;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 pathString:(id)arg2 lldbModule:(struct SBModule)arg3;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBProcess : DBGProcess
{
    struct SBProcess _lldbProcess;
    NSArray *_previousDBGThreads;
    NSArray *_loadedCodeModules;
    unsigned long long _addressByteSize;
    BOOL _needCodeModuleUpdate;
    BOOL _pendingLazyCodeModuleUpdate;
    DVTDispatchLock *_previousDBGThreadsLock;
    NSMutableDictionary *_codeModuleForPathTable;
    BOOL _isDoingAsyncAttach;
    BOOL _isCoreFile;
}

@property BOOL isCoreFile; // @synthesize isCoreFile=_isCoreFile;
@property BOOL isDoingAsyncAttach; // @synthesize isDoingAsyncAttach=_isDoingAsyncAttach;
@property(copy) NSArray *loadedCodeModules; // @synthesize loadedCodeModules=_loadedCodeModules;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_assertIsLLDBSessionThread;
- (void)reflectLLDBSelectedThreadAndFrame;
- (BOOL)_isExceptionBreakpoint:(unsigned long long)arg1;
- (void)_updateDBGThreadStateAndStopReason:(id)arg1 fromLLDBThread:(struct SBThread)arg2 isCurrentThread:(BOOL)arg3;
- (BOOL)isLLDBExceptionFatal:(unsigned long long)arg1;
- (void)clearQueueThreadStackStates;
- (void)_readMemoryAtAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 dataToReadInto:(id)arg3 shouldCancel:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (id)readMemoryAtAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)readMemoryAtAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)rawMemoryDataForAddressExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (BOOL)getQueues:(id *)arg1 threads:(id *)arg2 currentThread:(id *)arg3;
- (void)_updateQueues:(id *)arg1 fromLLDBProcess:(struct SBProcess *)arg2 withComputedThreads:(id)arg3;
- (void)_updateThreads:(id *)arg1 currentThread:(id *)arg2 fromLLDBProcess:(struct SBProcess *)arg3;
- (struct SBThread)_currentLLDBThread;
- (void)_updateCodeModulesImmediatelyIfNecessary;
- (void)_updateCodeModulesAfterDelay;
@property BOOL needCodeModuleUpdate;
- (unsigned long long)addressByteSize;
- (struct SBProcess)lldbProcess;
- (void)setCurrentStackFrame:(id)arg1;
- (id)initWithDebugSession:(id)arg1 lldbProcess:(struct SBProcess)arg2;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBReadMemoryCancellableToken : NSObject <DVTCancellable>
{
    BOOL _isCancelled;
}

@property(readonly, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_isCancelled;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBThread : DBGThread <DBGLLDBInvalidation>
{
    struct SBThread _lldbThread;
    struct SBQueueItem _lldbQueueItem;
    BOOL _derivedRecordedThread;
    BOOL _hasFetchedFullListOfStackFrames;
    NSMutableArray *_backingStackFrames;
    unsigned long long _reuseGeneration;
    DVTDispatchLock *_reuseGenerationLock;
    BOOL _markedForInvalidationFromTheSessionThread;
}

+ (id)createPendingBlockThreadWithParentProcess:(id)arg1 queueItem:(struct SBQueueItem)arg2 name:(id)arg3;
+ (id)queryRecordedStackFramesForThread:(id)arg1 withParentProcess:(id)arg2 queue:(id)arg3 lldbThread:(struct SBThread)arg4;
+ (BOOL)_isLookingForNSOperationInStackFrames:(id)arg1;
+ (void)initialize;
@property BOOL markedForInvalidationFromTheSessionThread; // @synthesize markedForInvalidationFromTheSessionThread=_markedForInvalidationFromTheSessionThread;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_invalidateAndClearBackingStackFrames:(id)arg1;
- (void)primitiveInvalidate;
- (void)invalidateUnusedStackFramesAfterCallToSetStackFrames:(id)arg1;
- (void)requestUnsuspend;
- (void)requestSuspend;
- (void)requestStackFrames:(unsigned long long)arg1 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg2;
- (void)_setStackFramesOnMainThread:(id)arg1;
- (void)willReuse;
- (void)refreshStackFrames;
- (id)_frameNameForSBFrame:(struct SBFrame)arg1;
- (id)_fetchBackingStackFramesIfNecessary:(unsigned long long)arg1 markRecorded:(BOOL)arg2;
- (id)recordedThread;
@property(readonly) DBGLLDBSession *lldbSession;
- (void)_assertNotMarkedForInvalidationAndOnSessionThread;
- (void)_setLLDBQueueItem:(struct SBQueueItem)arg1;
- (struct SBThread)lldbThread;
- (id)initWithParentProcess:(id)arg1 uniqueID:(id)arg2 lldbThread:(struct SBThread)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBStackFrame : DBGStackFrame <DBGLLDBInvalidation>
{
    struct SBFrame _lldbFrame;
    struct SBValueList _lldbVariables;
    struct SBValueList _lldbRegisters;
    NSArray *_variables;
    NSArray *_locals;
    NSArray *_arguments;
    NSArray *_fileStatics;
    NSArray *_registers;
    NSMutableSet *_expressionDataValuesToInvalidate;
    BOOL _markedForInvalidationFromTheSessionThread;
    BOOL _hasInitializedDisassembly;
}

@property BOOL markedForInvalidationFromTheSessionThread; // @synthesize markedForInvalidationFromTheSessionThread=_markedForInvalidationFromTheSessionThread;
@property(copy, nonatomic) NSArray *fileStatics; // @synthesize fileStatics=_fileStatics;
@property(copy, nonatomic) NSArray *registers; // @synthesize registers=_registers;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSArray *locals; // @synthesize locals=_locals;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)disassembly;
- (id)dataValuesToInvalidate;
- (id)_lldbSession;
- (void)_getRegistersFromLLDBOnSessionThread;
- (void)_getFileStaticsFromLLDBOnSessionThread;
- (void)_getLocalsFromLLDBOnSessionThread;
- (void)_getArgumentsFromLLDBOnSessionThread;
- (id)_evaluateExpressionOnSessionThread:(id)arg1 options:(id)arg2;
- (void)evaluateExpression:(id)arg1 options:(id)arg2 withResultBlock:(CDUnknownBlockType)arg3;
- (void)requestDataValueForSymbol:(id)arg1 symbolKind:(id)arg2 atLocation:(id)arg3 onQueue:(id)arg4 withResultBlock:(CDUnknownBlockType)arg5;
- (id)_findSymbolWithName:(id)arg1 symbolKind:(id)arg2 atLocation:(id)arg3;
- (void)_getAllFrameVariablesOnLLDBSessionThread;
- (void)_addSessionThreadAction:(CDUnknownBlockType)arg1;
- (id)_weakSelf;
- (BOOL)_isSessionThread;
- (void)_assertNotMarkedForInvalidationAndOnSessionThread;
- (void)_setReturnValueFromInitIfNecessary;
- (struct SBFrame)lldbFrame;
- (id)initWithParentThread:(id)arg1 frameNumber:(id)arg2 framePointer:(id)arg3 name:(id)arg4 lldbFrame:(struct SBFrame)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBDataValue : DBGDataValue <DBGLLDBInvalidation>
{
    DBGLLDBDataValue *_parent;
    DBGLLDBDataType *_dbgStaticType;
    struct SBValue _lldbValueObject;
    struct SBValue _lldbValueObject_masked;
    struct SBValue _lldbValueObject_masked2;
    NSMutableArray *_childValues;
    BOOL _childValuesCountValid;
    NSString *_name_str;
    NSString *_value_str;
    NSString *_masked_value_str;
    NSString *_summary_str;
    NSString *_expr_path_str;
    BOOL _value_has_changed;
    BOOL _uses_masked_value;
    BOOL _in_scope;
    BOOL _hasChildValues;
    BOOL _requested_children;
    BOOL _requestedSummary;
    BOOL _representsNilObjectiveCObject;
    BOOL _representsNullObjectPointer;
    NSArray *_classNameHierarchy;
    BOOL _markedForInvalidationFromTheSessionThread;
    BOOL _isDictionarySynthesizedParent;
    BOOL _isSessionThread;
    BOOL _shouldUsePlaceholderChildDataValues;
}

+ (id)_dataValueWithDisplayName:(id)arg1 tag:(unsigned long long)arg2;
+ (id)supportedDataValueFormats;
+ (int)dynamicValueType;
+ (void)initialize;
@property(readonly) BOOL shouldUsePlaceholderChildDataValues; // @synthesize shouldUsePlaceholderChildDataValues=_shouldUsePlaceholderChildDataValues;
@property(readonly) BOOL isSessionThread; // @synthesize isSessionThread=_isSessionThread;
@property BOOL markedForInvalidationFromTheSessionThread; // @synthesize markedForInvalidationFromTheSessionThread=_markedForInvalidationFromTheSessionThread;
- (id)parent;
- (id)staticType;
@property BOOL childValuesCountValid; // @synthesize childValuesCountValid=_childValuesCountValid;
@property(retain, nonatomic) NSArray *childValues; // @synthesize childValues=_childValues;
- (BOOL)hasChildValues;
- (BOOL)inScope;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary_str;
- (BOOL)valueHasChanged;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)_dataValueFormatForLLDBFormat:(int)arg1;
- (void)_updateValueFormatsForStackFrame:(id)arg1;
- (void)_persistValueFormat:(id)arg1 stackFrame:(id)arg2;
- (id)_contextNameForFormatsWithStackFrame:(id)arg1;
- (id)_contextNameForStackFrame:(id)arg1;
- (id)_classNameHierarchyStartingWithType:(struct SBType)arg1;
- (void)classNameHierarchy:(CDUnknownBlockType)arg1;
- (void)ensureAllDisplayablePropertiesAreLoaded:(CDUnknownBlockType)arg1;
- (BOOL)_calculateRepresentsNullObjectPointer;
- (BOOL)representsNullObjectPointer;
- (BOOL)_calculateRepresentsNilObjectiveCObject;
- (BOOL)representsNilObjectiveCObject;
- (void)watch;
- (id)realName;
- (BOOL)wantsToProvideSummary;
- (id)_createNSStringForCString:(const char *)arg1;
@property(readonly, copy) NSString *description;
- (id)_lldbValueObjectDescription;
- (id)_lldbValueDescription;
- (id)lldbDescription;
- (void)setFormat:(id)arg1;
- (void)_primitiveSetFormat:(id)arg1;
- (id)format;
- (const char *)valueAsCString;
- (id)primitiveChildValues;
- (void)_childValueDidFault:(id)arg1 childIndex:(unsigned long long)arg2;
- (void)_setChildValuesToArrayOfPlaceholders;
- (void)_setChildValuesToArrayOfActualChildren;
- (void)_fetchChildValuesFromLLDBOnSessionThreadIfNecessary;
- (void)childWithName:(id)arg1 foundChild:(CDUnknownBlockType)arg2;
- (id)_calculateSummaryForDictionaryElement;
- (id)_calculateSummary;
- (void)_fetchSummaryFromLLDBOnSessionThreadIfNecessary;
- (id)value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name_str;
- (BOOL)dynamicTypeHasChanged;
- (BOOL)summaryHasChanged;
- (void)setValue:(id)arg1;
- (id)blockStartAddress;
- (id)expressionPath;
- (void)_addSessionThreadAction:(CDUnknownBlockType)arg1;
- (id)_weakSelf;
- (id)_lldbSession;
- (BOOL)_isSessionThread;
- (void)_assertNotMarkedForInvalidationAndOnSessionThread;
@property(readonly) DBGLLDBStackFrame *lldbStackFrame;
- (id)initWithLLDBValueObject:(struct SBValue)arg1 forStackFrame:(id)arg2 withParent:(id)arg3 updateSummary:(BOOL)arg4;
- (id)initWithLLDBValueObject:(struct SBValue)arg1 forStackFrame:(id)arg2 withParent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBChildPlaceholderDataValue : DBGLLDBDataValue
{
    DBGLLDBDataValue *_parentDataValue;
    unsigned long long _childIndex;
    BOOL _hasFaulted;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)value;
- (id)_initWithParentDataValue:(id)arg1 childIndex:(unsigned long long)arg2;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBLauncher : IDERunOperationPathWorker <IDEConsoleAdaptorDelegateProtocol>
{
    struct SBDebugger _lldbDebugger;
    DBGLLDBSession *_debugSession;
    NSString *_lastKnownDebuggerPrompt;
    BOOL _ignorePromptOnce;
    NSObject<OS_dispatch_queue> *_executeLLDBCommandQueue;
    DVTDispatchLock *_lifeCycleLock;
    BOOL _terminateCalled;
}

+ (void)initialize;
@property(readonly) BOOL terminateCalled; // @synthesize terminateCalled=_terminateCalled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)terminate;
- (void)start;
- (id)_consumeEventAfterConnectToDebugServer:(struct SBProcess)arg1 lldbTarget:(struct SBTarget)arg2 launchParameters:(id)arg3;
- (void)_setMiscHandleCommands:(id)arg1;
- (void)_setPlatformForStart:(id)arg1;
- (void)_messageTrace:(id)arg1;
- (id)devicePathSubstitutionPairsString;
- (struct SBTarget)_tryWithAnotherArchitectureOnBinaryPath:(id)arg1;
- (struct SBProcess)_doRegularDebugWithTarget:(struct SBTarget)arg1 usingDebugServer:(BOOL)arg2 errTargetString:(id)arg3;
- (void)_reportTarget:(id)arg1 failedToLaunchError:(struct SBError)arg2;
- (struct SBProcess)_doAttachWithTarget:(struct SBTarget)arg1 childPID:(unsigned long long *)arg2;
- (id)executableArguments;
- (id)parseConsoleOutputFromOriginalOutput:(id)arg1;
- (id)parseConsoleInputFromOriginalInput:(id)arg1;
- (void)_executeLLDBCommands:(id)arg1;
- (void)_createDebuggerConsoleAdaptor;
- (struct SBDebugger)lldbDebugger;
- (void)setFinishedRunning;
- (void)_logToConsoleForUserActions:(id)arg1;
- (void)_logDebugStringFromLLDB:(const char *)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBSession : DBGDebugSession <IDEConsoleAdaptorDelegateProtocol, DBGDebugSessionBreakpointLifeCycleDelegate>
{
    struct SBTarget _lldbTarget;
    struct auto_ptr<lldb::SBBroadcaster> _broadcasterAP;
    NSString *_prompt;
    NSMutableArray *_resumeActions;
    NSMutableArray *_actionsOnSessionThread;
    DVTDispatchLock *_actionsLock;
    struct _opaque_pthread_t *_sessionThread;
    BOOL _shouldSetIsLongRunningConsoleCommand;
    BOOL _isLongRunningConsoleCommand;
    NSObject<OS_dispatch_queue> *_isLongRunningConsoleCommandQueue;
    BOOL _profileUseAnonymous;
    BOOL _profilingEnabled;
    unsigned long long _previousHostUserTicks;
    unsigned long long _previousHostSystemTicks;
    unsigned long long _previousHostIdleTicks;
    unsigned long long _totalElapsedMicroSec;
    unsigned long long _previousElapsedMicroSec;
    unsigned long long _previousUsedMicroSec;
    struct __CFDictionary *_previousUsedMicroSecForThreadTable;
    unsigned long long _previousEnergy;
    NSMutableString *_previousProfileDataString;
    BOOL _isTracingOnDeviceAndTargetGotJetsam;
    BOOL _targetShouldNotAutoContinue;
    BOOL _breakpointHit;
    BOOL _pauseRequested;
    BOOL _fetchEventRequested;
    BOOL _killCalled;
    BOOL _readyForActionsWhenPaused;
    BOOL _shouldIssueKillAfterPause;
    int _initialProfileScanType;
    int _actualProfileScanType;
    NSMutableArray *_actionsWhenPaused;
    NSMutableArray *_expressionsWhenPaused;
}

@property(retain) NSMutableArray *expressionsWhenPaused; // @synthesize expressionsWhenPaused=_expressionsWhenPaused;
@property BOOL shouldIssueKillAfterPause; // @synthesize shouldIssueKillAfterPause=_shouldIssueKillAfterPause;
@property BOOL readyForActionsWhenPaused; // @synthesize readyForActionsWhenPaused=_readyForActionsWhenPaused;
@property(retain) NSMutableArray *actionsWhenPaused; // @synthesize actionsWhenPaused=_actionsWhenPaused;
@property BOOL killCalled; // @synthesize killCalled=_killCalled;
@property BOOL fetchEventRequested; // @synthesize fetchEventRequested=_fetchEventRequested;
@property BOOL pauseRequested; // @synthesize pauseRequested=_pauseRequested;
@property BOOL breakpointHit; // @synthesize breakpointHit=_breakpointHit;
@property(nonatomic) int actualProfileScanType; // @synthesize actualProfileScanType=_actualProfileScanType;
@property int initialProfileScanType; // @synthesize initialProfileScanType=_initialProfileScanType;
@property(nonatomic, getter=isProfilingEnabled) BOOL profilingEnabled; // @synthesize profilingEnabled=_profilingEnabled;
@property BOOL targetShouldNotAutoContinue; // @synthesize targetShouldNotAutoContinue=_targetShouldNotAutoContinue;
@property BOOL isTracingOnDeviceAndTargetGotJetsam; // @synthesize isTracingOnDeviceAndTargetGotJetsam=_isTracingOnDeviceAndTargetGotJetsam;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setUpRecordingStackFramesForAttach;
- (id)_lldbProcessPlugnPacketSend:(const char *)arg1;
- (void)primitiveInvalidate;
- (BOOL)shouldIgnoreSigTermKill;
- (void)_runPendingExpressionsAndPurgeList;
- (void)_refreshThreadListAndUpdateCurrentThread:(int)arg1;
- (void)assertIsLLDBSessionThread;
- (void)_handleThreadEvent:(struct SBEvent)arg1;
- (id)dbgLLDBProcess;
- (void)forceRefreshPausedStates;
- (void)appendProfileDataString:(id)arg1;
- (void)processProfileDataString:(id)arg1;
- (id)_stringFromHexString:(id)arg1;
- (const char *)_getProfileEnableString;
- (void)terminateCurrentDebuggerCommandIfNeeded;
- (id)supportedDataValueFormatsForDataValue:(id)arg1;
- (BOOL)consoleShouldTrackInputHistory;
- (struct SBBreakpointLocation)_sbBreakpointLocationForIDEBreakpointLocation:(id)arg1;
- (void)_handleBreakpointLocationEnablementChangedFromSessionThread:(id)arg1;
- (void)breakpointLocationEnablementChanged:(id)arg1;
- (void)_handleBreakpointLocationIgnoreCountChangedFromSessionThread:(id)arg1;
- (void)breakpointLocationIgnoreCount:(id)arg1;
- (void)_handleBreakpointLocationConditionChangedFromSessionThread:(id)arg1;
- (void)breakpointLocationConditionChanged:(id)arg1;
- (void)_handleBreakpointEnablementChangedFromLLDBSessionThread:(id)arg1;
- (void)breakpointEnablementChanged:(id)arg1;
- (void)_handleBreakpointIgnoreCountChangedFromLLDBSessionThread:(id)arg1;
- (void)breakpointIgnoreCountChanged:(id)arg1;
- (void)_handleBreakpointConditionChangedFromLLDBSessionThread:(id)arg1;
- (void)breakpointConditionChanged:(id)arg1;
- (void)_logBreakpointState:(struct SBBreakpoint)arg1 usingPrefix:(id)arg2;
- (void)_handleWatchpointEnablementChangedFromLLDBSessionThread:(id)arg1;
- (void)watchpointEnablementChanged:(id)arg1;
- (void)_handleActivationStateChangedFromSessionThread:(BOOL)arg1 forBreakpoints:(id)arg2;
- (void)activationStateChanged:(BOOL)arg1 forBreakpoints:(id)arg2;
- (void)_deleteBreakpointFromLLDBSessionThread:(id)arg1 breakpointLocations:(id)arg2;
- (void)deleteBreakpoint:(id)arg1;
- (void)_handleBreakpointLocationsRemovedEvent:(struct SBEvent)arg1;
- (void)_handleBreakpointLocationsAddedEvent:(struct SBEvent)arg1;
- (void)_handleBreakpointRemovedEventFromLLDB:(struct SBBreakpoint)arg1;
- (id)_breakpointLocationFromSBBreakpointLocation:(struct SBBreakpointLocation)arg1;
- (void)_handleBreakpointAddedEventFromLLDB:(struct SBBreakpoint)arg1;
- (void)_deleteWatchpointFromLLDBSessionThread:(id)arg1;
- (void)deleteWatchpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromAddressBreakpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromExceptionBreakpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromTestFailureBreakpoint:(id)arg1;
- (struct SBBreakpoint)_sbBreakpointForSymbolsNames:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromSymbolicBreakpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromFileBreakpoint:(id)arg1;
- (void)_createBreakpointIfNecessaryFromLLDBSessionThread:(id)arg1;
- (void)createBreakpointIfNecessary:(id)arg1;
- (void)_evaluateExpressionFromSessionThread:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deregisterProfileDataObserver:(id)arg1;
- (void)registerProfileDataObserver:(id)arg1;
- (void)_setProfilingEnabled:(BOOL)arg1;
- (void)_setProfilingEnabled:(BOOL)arg1 updateLLDB:(BOOL)arg2;
- (id)commandsExpectingExpressions;
- (void)_delayedSetRunningState;
- (void)_invalidateObjectsFromMainThread:(id)arg1;
- (void)_markObjectsForInvalidationFromSessionThread:(id)arg1;
- (void)safelyInvalidateLLDBInvalidatableObjects:(id)arg1;
- (void)_quitWatchdogOnProcessState:(int *)arg1 forceQuit:(BOOL)arg2;
- (void)_cancelAndClearAllSessionThreadActionsByFirstTakingActionsLock;
- (void)_cancelAndClearAllSessionThreadActionsWithActionsLockAlreadyTaken;
- (BOOL)handleNextActionWithState:(int *)arg1 withRunPending:(char *)arg2;
- (void)addSessionThreadAction:(CDUnknownBlockType)arg1;
- (void)completeString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)printDescriptionOfDataValueToConsole:(id)arg1 runAllThreads:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestDataContainerForSymbol:(id)arg1 atLocation:(id)arg2;
- (id)_createNSStringForCString:(const char *)arg1;
- (id)_logicalValueForBreakpointActionExpression:(struct SBValue)arg1;
- (void)_performBreakpointActions:(id)arg1 frame:(struct SBFrame)arg2;
- (void)_removeBreakpointHitCallback:(unsigned long long)arg1;
- (void)_addBreakpointHitCallback:(struct SBBreakpoint)arg1;
- (void)requestLoadDylibAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestMovePCInStackFrame:(id)arg1 toLineNumber:(unsigned long long)arg2;
- (BOOL)supportsPCAnnotationDragging;
- (BOOL)supportsMultiplePCAnnotation;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (void)executeConsoleCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (void)_putLLDBInThreadID:(unsigned long long)arg1 stackFrameID:(unsigned long long)arg2 restoreThreadFrameAfterWork:(BOOL)arg3 toDoWork:(CDUnknownBlockType)arg4;
- (void)_requestFetchEventOnSessionThread;
- (void)requestFetchEvent;
- (void)_runActionOnSessionThreadWhenPaused:(CDUnknownBlockType)arg1;
- (void)requestContinueToLocation:(id)arg1;
- (void)requestStepIntoCallSymbol:(id)arg1 atLocation:(id)arg2;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStop;
- (void)requestDetach;
- (void)requestContinue;
- (void)requestPause;
- (void)requestStepOut;
- (void)requestStepOverInstruction;
- (void)requestStepOverLine;
- (void)requestStepIntoInstruction;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepIn;
- (void)_appendProcessControlAction:(int)arg1 scope:(int)arg2 arg:(unsigned long long)arg3 location:(id)arg4;
- (void)_appendProcessControlAction:(int)arg1 scope:(int)arg2 arg:(unsigned long long)arg3;
- (void)_setSessionThreadID:(struct _opaque_pthread_t *)arg1;
- (BOOL)currentThreadIsSessionThread;
- (void)debuggerHasStandardOutput;
- (void)_resetFlagsForTestingLongRunningConsoleCommand;
- (void)_setAndAppendPrompt:(id)arg1;
- (id)prompt;
- (void)trackProcess;
- (struct SBBroadcaster *)lldbBroadcaster;
- (struct SBTarget *)lldbTarget;
- (void)setTarget:(struct SBTarget)arg1;
@property(readonly) DBGLLDBLauncher *launcher;
- (id)initWithDebugLauncher:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBDataType : DBGDataType
{
    struct SBType _lldbType;
    NSString *_pointeeTypeName;
    NSString *_displayTypeName;
    BOOL _isPointer;
}

@property(retain) NSString *pointeeTypeName; // @synthesize pointeeTypeName=_pointeeTypeName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isUnknownType;
- (BOOL)isPointer;
- (id)displayTypeName;
- (id)initWithTypename:(id)arg1 withType:(struct SBType)arg2;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBProcessControl : NSObject
{
    int _action;
    int _scope;
    DBGLLDBThread *_thread;
    unsigned long long _arg0;
    DVTTextDocumentLocation *_location;
}

@property(readonly) DVTTextDocumentLocation *location; // @synthesize location=_location;
@property(readonly) unsigned long long argument; // @synthesize argument=_arg0;
@property(readonly) DBGLLDBThread *thread; // @synthesize thread=_thread;
@property(readonly) int scope; // @synthesize scope=_scope;
@property(readonly) int action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithAction:(int)arg1 scope:(int)arg2 thread:(id)arg3 arg:(unsigned long long)arg4 location:(id)arg5;
- (id)initWithAction:(int)arg1 scope:(int)arg2 thread:(id)arg3 arg:(unsigned long long)arg4;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBMemoryManager : NSObject
{
    id _workspaceClosedNotificationObserver;
    id _memoryPressureNotificationObserver;
}

+ (void)stop;
+ (void)start;
- (void).cxx_destruct;
- (void)_invalidate;
- (id)_initInternal;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface _DBGDebuggerLLDBBundlePrivateClassForFindingBundle : NSObject
{
}

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBQueue : DBGQueue <DBGLLDBInvalidation>
{
    struct SBQueue _lldbQueue;
    unsigned long long _numPendingBlocks;
    BOOL _derivedPendingBlocks;
    BOOL _markedForInvalidationFromTheSessionThread;
}

@property BOOL markedForInvalidationFromTheSessionThread; // @synthesize markedForInvalidationFromTheSessionThread=_markedForInvalidationFromTheSessionThread;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)invalidateOldPendingBlocksThreads:(id)arg1;
- (unsigned long long)numberOfPendingBlocks;
- (id)pendingBlocksThreads;
- (id)lldbSession;
- (id)initWithParentProcess:(id)arg1 lldbQueue:(struct SBQueue)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

