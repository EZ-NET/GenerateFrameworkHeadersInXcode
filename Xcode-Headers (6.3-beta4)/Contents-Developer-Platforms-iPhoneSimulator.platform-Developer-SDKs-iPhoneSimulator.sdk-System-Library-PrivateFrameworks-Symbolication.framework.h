//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct VMULabelUniquingDataForStringType {
    id _field1;
    id _field2;
};

struct _CSTypeRef {
    unsigned long long _opaque_1;
    unsigned long long _opaque_2;
};

struct _VMUBlockNode {
    unsigned long long _field1;
    unsigned int :3;
    unsigned int :36;
    unsigned int :25;
};

struct _VMUDirectedGraphEdge {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct _VMUDirectedGraphNode {
    unsigned int _field1;
    unsigned int _field2;
};

struct _VMUObjectGraphEdge {
    unsigned int :64;
    unsigned int :4;
    unsigned int :60;
};

struct _VMURange {
    unsigned long long location;
    unsigned long long length;
};

struct _VMURegionMap {
    void *_field1;
    struct _VMURegionNode *_field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned int _field6[0];
};

struct _VMURegionNode {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    void *_field5;
    unsigned long long _field6;
    struct _VMURegionNode *_field7;
    _Bool _field8;
    _Bool _field9;
    struct *_field10;
    unsigned int _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    int _field14;
    int _field15;
    unsigned int _field16;
    unsigned char _field17;
    unsigned char _field18;
};

struct _VMUThreadNode {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long *_field4;
};

struct _VMUZoneNode {
    unsigned long long _field1;
    struct malloc_introspection_t *_field2;
    id _field3;
};

struct __CFRuntimeBase {
    unsigned long long _field1;
    unsigned char _field2[4];
    unsigned int _field3;
};

struct malloc_introspection_t;

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned int :60;
    unsigned int :4;
    id _field2;
} CDStruct_599faf0f;

typedef struct {
    unsigned long long _field1;
    int _field2;
    unsigned long long _field3;
} CDStruct_df82e459;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
// UUID: C24F1115-CE13-3CA2-8526-B5F2B19F3D4B
//
//                           Arch: x86_64
//                Current version: 56046.1.0
//          Compatibility version: 1.0.0
//                 Source version: 56046.1.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
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

@protocol VMULibraryLoadDelegate <NSObject>
- (void)_libraryLoaded:(struct _CSTypeRef)arg1;
@end

@interface VMUArchitecture : NSObject <NSCoding, NSCopying>
{
    int _cpuType;
    int _cpuSubtype;
}

+ (id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2;
+ (id)armArchitecture;
+ (id)x86_64Architecture;
+ (id)x86_32Architecture;
+ (id)i386Architecture;
+ (id)ppc64Architecture;
+ (id)ppc32Architecture;
+ (id)ppcArchitecture;
+ (id)anyArchitecture;
+ (id)currentArchitecture;
+ (void)initialize;
- (id)description;
- (int)cpuSubtype;
- (int)cpuType;
- (_Bool)matchesArchitecture:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToArchitecture:(id)arg1;
- (_Bool)is64Bit;
- (_Bool)is32Bit;
- (_Bool)isLittleEndian;
- (_Bool)isBigEndian;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2;

@end

__attribute__((visibility("hidden")))
@interface VMUCallTreePseudoNode : VMUCallTreeNode
{
}

- (id)largestTopOfStackPath;
- (id)sortedChildrenWithPseudoNode;
- (id)pseudoNodeTopOfStackChild;
- (_Bool)isPseudo;

@end

@interface VMUCallTreeNode : NSObject
{
    VMUCallTreeNode *_parent;
    NSString *_name;
    unsigned long long _address;
    unsigned int _count;
    unsigned long long _numBytes;
    unsigned int _numChildren;
    union {
        void *theChild;
        void **theChildren;
    } _un;
}

+ (id)makeFakeRootForNode:(id)arg1;
+ (id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned long long)arg4;
- (id)pruneMallocSize:(unsigned long long)arg1;
- (id)pruneCount:(unsigned int)arg1;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(_Bool)arg1;
- (id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(_Bool)arg2;
- (id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3;
- (id)filterOutSymbols:(id)arg1;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)invertedNode;
- (id)stringFromCallTreeIndentIfNoBranches:(_Bool)arg1;
- (id)stringFromCallTreeIndentIfNoBranches:(_Bool)arg1 showPseudoNodes:(_Bool)arg2;
- (_Bool)callTreeHasBranches;
- (id)fullOutputWithThreshold:(unsigned int)arg1;
- (id)fullOutputWithThreshold:(unsigned int)arg1 showPseudoNodes:(_Bool)arg2;
- (void)countFunctionOccurrencesInTree:(id)arg1;
- (id)largestTopOfStackPath;
- (id)sortedChildrenWithPseudoNode;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (id)pseudoNodeTopOfStackChild;
- (long long)comparePuttingMainThreadFirst:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compareSizeAndCount:(id)arg1;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(_Bool)arg4;
- (void)parseNameIntoSymbol:(id *)arg1 library:(id *)arg2 loadAddress:(unsigned long long *)arg3 offset:(unsigned long long *)arg4 address:(unsigned long long *)arg5 suffix:(id *)arg6;
- (id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6;
- (id)nameWithoutOffset;
- (_Bool)isMallocBlockContentNode;
- (_Bool)symbolNameIsUnknown;
- (id)pseudoName;
- (_Bool)isPseudo;
- (id)browserName;
- (void)getBrowserName:(id)arg1;
- (id)name;
- (unsigned long long)numBytes;
- (unsigned int)count;
- (unsigned long long)address;
- (id)parent;
- (void)dealloc;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (id)allChildren;
- (id)childAtIndex:(unsigned int)arg1;
- (void)setNumChildren:(unsigned int)arg1;
- (unsigned int)numChildren;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;

@end

@interface VMUProcList : NSObject
{
    NSLock *procLock;
    NSMapTable *allProcs;
    NSMapTable *filteredProcs;
    _Bool appsOnly;
    _Bool ownedOnly;
}

- (id)procInfoWithPID:(int)arg1;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void *)arg3;
- (id)newestProcInfoWithName:(id)arg1;
- (id)newestProcInfo;
- (id)allPathNames;
- (id)allNames;
- (id)allPIDs;
- (id)allProcInfos;
- (unsigned long long)count;
- (_Bool)appsOnly;
- (void)setAppsOnly:(_Bool)arg1;
- (_Bool)ownedOnly:(_Bool)arg1;
- (void)setOwnedOnly:(_Bool)arg1;
- (_Bool)updateFromSystem;
- (void)_populateFromSystem;
- (_Bool)update;
- (void)removeProcInfo:(id)arg1;
- (void)addProcInfo:(id)arg1;
- (void)setProcInfos:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

@interface VMUSampler : NSObject
{
    unsigned long long _options;
    int _pid;
    unsigned int _task;
    _Bool _needTaskPortDealloc;
    _Bool _recordThreadStates;
    _Bool _taskIs64Bit;
    NSString *_processName;
    VMUProcessDescription *_processDescription;
    struct _CSTypeRef _symbolicator;
    VMUTaskMemoryCache *_memCache;
    struct sampling_context_t *_samplingContext;
    unsigned int _mainThread;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int _numberOfCopiedBacktraces;
    unsigned int *_previousThreadList;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    _Bool _sampling;
    unsigned int _samplingThreadPort;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    _Bool _stacksFixed;
    id _delegate;
    double _timeSpentSamplingWithoutCFI;
    double _timeSpentSamplingWithCFI;
    unsigned int _dispatchThreadSoftLimit;
    unsigned int _dispatchThreadSoftLimitCount;
    unsigned int _dispatchThreadHardLimit;
    unsigned int _dispatchThreadHardLimitCount;
}

+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 symbolicate:(_Bool)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (void)initialize;
- (void)writeOutput:(id)arg1 append:(_Bool)arg2;
- (id)createOutput;
- (id)outputString;
- (id)stopSamplingAndReturnCallNode;
- (void)forceStop;
- (void)stopSampling;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (void)preloadSymbols;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(_Bool *)arg2 returnedThreadId:(unsigned long long *)arg3;
- (id)threadNameForThread:(unsigned int)arg1;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long *)arg2 returnedDispatchQueueSerialNum:(unsigned long long *)arg3;
- (unsigned int)mainThread;
- (void)flushData;
- (unsigned int)sampleCount;
- (id)samples;
- (int)pid;
- (struct _CSTypeRef)symbolicator;
- (_Bool)shouldOutputSignature;
- (void)setShouldOutputSignature:(_Bool)arg1;
- (void)setRecordThreadStates:(_Bool)arg1;
- (unsigned int)sampleLimit;
- (void)setSampleLimit:(unsigned int)arg1;
- (double)timeLimit;
- (void)setTimeLimit:(double)arg1;
- (double)samplingInterval;
- (void)setSamplingInterval:(double)arg1;
- (_Bool)waitUntilDone;
- (_Bool)stop;
- (_Bool)start;
- (id)sampleThread:(unsigned int)arg1;
- (id)sampleAllThreadsOnce;
- (void)_runSamplingThread;
- (void)_fixupStacks:(id)arg1;
- (unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned int)arg4;
- (void)_checkDispatchThreadLimits;
- (void)initializeSamplingContext:(_Bool)arg1;
- (void)_makeTimeshare;
- (void)_makeHighPriority;
- (void)finalize;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithPID:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithPID:(int)arg1;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned long long)arg3;

@end

__attribute__((visibility("hidden")))
@interface VMUTaskMemoryCache : NSObject
{
    struct mapped_memory_t *_memoryRegions;
    unsigned int _task;
    _Bool _taskIs64Bit;
    _Bool _stopped;
    _Bool _shouldTouchPages;
}

+ (id)taskMemoryCacheForTask:(unsigned int)arg1;
+ (_Bool)taskIs64Bit:(unsigned int)arg1;
- (_Bool)copyRange:(struct _VMURange)arg1 to:(void *)arg2;
- (int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long *)arg2;
- (int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void **)arg3;
- (int)stopPeeking;
- (int)startPeeking;
- (void)finalize;
- (void)dealloc;
- (void)flushMemoryCache;
- (id)initWithTask:(unsigned int)arg1;

@end

@interface VMURangeArray : NSObject <NSCopying>
{
    unsigned int _count;
    struct _VMURange *_ranges;
    unsigned int _max;
    _Bool _sorted;
}

- (id)description;
- (unsigned int)count;
- (struct _VMURange *)ranges;
- (unsigned long long)sumLengths;
- (struct _VMURange)largestRange;
- (struct _VMURange)range;
- (struct _VMURange)largestSubrangeNotExcludedBySelfForRange:(struct _VMURange)arg1 andLargerThan:(unsigned long long)arg2 startIndex:(unsigned int *)arg3;
- (struct _VMURange)subrangeNotExcludedBySelfForRange:(struct _VMURange)arg1;
- (_Bool)intersectsRange:(struct _VMURange)arg1;
- (_Bool)intersectsLocation:(unsigned long long)arg1;
- (void)removeAllRanges;
- (void)removeRangeAtIndex:(unsigned int)arg1;
- (void)insertRange:(struct _VMURange)arg1 atIndex:(unsigned int)arg2;
- (struct _VMURange)rangeForLocation:(unsigned long long)arg1;
- (unsigned long long)indexForLocation:(unsigned long long)arg1;
- (struct _VMURange)rangeAtIndex:(unsigned int)arg1;
- (void)addRanges:(id)arg1;
- (void)addRange:(struct _VMURange)arg1;
- (void)sort;
- (void)setCapacity:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRanges:(const struct _VMURange *)arg1 count:(unsigned int)arg2;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface VMUNonOverlappingRangeArray : VMURangeArray
{
}

- (struct _VMURange)largestUnusedWithInUse:(id)arg1;
- (id)subtract:(id)arg1 mergeRanges:(_Bool)arg2;
- (void)_mergeAllBitsOfRange:(struct _VMURange)arg1 excludingRanges:(id)arg2 mergeRanges:(_Bool)arg3;
- (void)mergeRanges:(id)arg1 excludingRanges:(id)arg2;
- (void)mergeRange:(struct _VMURange)arg1 excludingRanges:(id)arg2;
- (void)mergeRanges:(id)arg1;
- (void)mergeRange:(struct _VMURange)arg1;
- (void)sortAndMergeRanges;
- (void)addOrExtendRange:(struct _VMURange)arg1;

@end

@interface VMUClassInfo : NSObject <NSCoding>
{
    CDUnknownBlockType _reader;
    unsigned long long _remoteIsa;
    unsigned long long _specificInstance;
    unsigned int _remotePointerSize;
    unsigned int _ivarCount;
    unsigned int _superclassOffset;
    unsigned int _instanceSize;
    unsigned int _ro_flags;
    unsigned int _rw_flags;
    struct objc_ivar **_localIvarList;
    int *_ivarScanSizes;
    unsigned int _remoteType;
    NSString *_remoteClassName;
    NSString *_remoteBinaryName;
    VMUClassInfo *_superclassLayout;
    const char *_weakLayout;
    const char *_strongLayout;
    const char *_extendedLayout;
    char *_scanMap;
    BOOL _hasSpecificLayout;
}

+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;
+ (id)classInfoWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;
+ (void)initialize;
@property(readonly) VMUClassInfo *superclassInfo; // @synthesize superclassInfo=_superclassLayout;
@property(readonly) NSString *className; // @synthesize className=_remoteClassName;
@property(readonly) unsigned long long specificInstance; // @synthesize specificInstance=_specificInstance;
@property(readonly) unsigned long long remoteIsa; // @synthesize remoteIsa=_remoteIsa;
@property(readonly) unsigned int instanceSize; // @synthesize instanceSize=_instanceSize;
@property(readonly) _Bool hasCppConstructorOrDestructor;
@property(readonly) _Bool isRootClass;
@property(readonly) _Bool isMetaClass;
@property(readonly) _Bool isRealized;
@property(readonly) _Bool isARR;
- (id)description;
- (id)debugDescription;
@property(readonly) NSString *shortIvarDescription;
@property(readonly) NSString *fullIvarDescription;
@property(readonly) int infoType;
@property(readonly) NSString *typeName;
- (id)type;
@property(readonly) NSString *binaryName; // @synthesize binaryName=_remoteBinaryName;
- (struct objc_ivar *)ivarWithOffset:(unsigned long long)arg1;
- (void)enumerateScanLocationsToSize:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateIvarsWithBlock:(CDUnknownBlockType)arg1;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1;
- (id)_instanceSpecificInfoForObject:(unsigned long long)arg1 pointerSize:(unsigned int)arg2 reader:(CDUnknownBlockType)arg3;
- (void)_setExtendedLayout:(const char *)arg1;
- (id)_specificCopy:(unsigned long long)arg1 instanceSize:(unsigned int)arg2 superclassOffset:(unsigned int)arg3;
- (void)enumerateKnownSublayoutsForObject:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)scanObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMemoryReader:(CDUnknownBlockType)arg1;
- (void)_logDescriptionWithSuperclasses:(_Bool)arg1 indentation:(int)arg2 toLogger:(CDUnknownBlockType)arg3;
- (id)_ivarDescription:(unsigned int)arg1 withSpacing:(unsigned int)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithIsaPointer:(unsigned long long)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef)arg3 type:(int)arg4 memoryReader:(CDUnknownBlockType)arg5;
- (id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef)arg3 type:(int)arg4 memoryReader:(CDUnknownBlockType)arg5;
- (id)_initWithClass:(unsigned long long)arg1 realizedOnly:(_Bool)arg2 infoMap:(id)arg3 symbolicator:(struct _CSTypeRef)arg4 type:(int)arg5 memoryReader:(CDUnknownBlockType)arg6;
- (id)initWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;
@property(readonly, nonatomic) _Bool hasSpecificLayout;
- (void)_setClassNameWithAddress:(unsigned long long)arg1;
- (void)_parseIvarsAndLayouts;
- (void)_processExtendedLayout:(const char *)arg1;
- (void)_processARRLayout:(const char *)arg1 scanType:(int)arg2;
- (void)_faultScanMap;
- (const char *)_copyRemoteLayout:(unsigned long long)arg1;
- (struct objc_ivar *)_copyRemoteIvarAt:(unsigned long long)arg1;
- (const char *)_copyRemoteStringAt:(unsigned long long)arg1;
- (unsigned long long)_readRemotePointerAt:(unsigned long long)arg1;
- (int)_readRemoteIntAt:(unsigned long long)arg1;

@end

__attribute__((visibility("hidden")))
@interface VMUObjectLabelHandlerInfo : NSObject
{
    NSString *_className;
    Class _localClass;
    SEL _handlerSelector;
}

- (void)dealloc;

@end

@interface VMUObjectIdentifier : NSObject
{
    unsigned int _task;
    struct _CSTypeRef _symbolicator;
    CDUnknownBlockType _memoryReader;
    VMUClassInfoMap *_isaToClassInfo;
    VMUClassInfoMap *_cfTypeIDtoClassInfo;
    VMUClassInfoMap *_unrealizedClassInfos;
    unsigned long long _coreFoundationCFTypeIsa;
    unsigned long long _foundationCFTypeIsa;
    CDUnknownBlockType _isaTranslator;
    unsigned long long *_nonPointerIndexMapping;
    void *_remoteObjectBuffer;
    unsigned long long _remoteObjectBufferSize;
    NSMapTable *_isaToObjectLabelHandlerMap;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    struct VMULabelUniquingDataForStringType *_stringToLabelStringUniquingData;
    NSMapTable *_numberToLabelStringUniquingMap;
    NSHashTable *_objcRuntimeMallocBlocksHash;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
}

- (id)classInfoForCFType:(struct __CFRuntimeBase *)arg1;
- (id)classInfoForIsaPointer:(unsigned long long)arg1;
- (id)classInfoForObject:(unsigned long long)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)labelForMallocBlock:(struct _VMURange)arg1;
- (id)labelForNSSet:(id)arg1;
- (id)labelForNSConcreteHashTable:(id)arg1;
- (id)labelForNSDictionary:(id)arg1;
- (id)labelForNSArray:(id)arg1;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForNSDate:(id)arg1;
- (id)labelForNSNumber:(id)arg1;
- (id)labelForNSPathStore2:(id)arg1;
- (id)labelForNSConcreteAttributedString:(id)arg1;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1;
- (id)labelForNSString:(id)arg1;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)osMajorMinorVersionString;
- (struct _VMURange)vmRegionRangeForAddress:(unsigned long long)arg1;
- (void)findObjCclasses;
- (void)findCFTypes;
- (id)_faultClass:(unsigned long long)arg1 ofType:(int)arg2;
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)classInfoForObjectWithRange:(struct _VMURange)arg1;
- (id)nullClassInfo;
- (void)enumerateAllClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (id)objcRuntimeMallocBlocksHash;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)CFTypeCount;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;

@end

@interface VMUVMRegionIdentifier : NSObject
{
    NSMutableArray *_regions;
    NSMapTable *_mallocZoneStatisticsMap;
}

- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1;
- (id)descriptionForRange:(struct _VMURange)arg1 options:(unsigned long long)arg2;
- (id)descriptionForRange:(struct _VMURange)arg1;
- (id)regions;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;

@end

@interface VMUBacktrace : NSObject <NSCopying>
{
    int _flavor;
    struct {
        struct {
            double t_begin;
            double t_end;
            int pid;
            unsigned int thread;
            int run_state;
            unsigned long long dispatch_queue_serial_num;
        } context;
        unsigned long long *frames;
        char *frame_types;
        unsigned int length;
    } _callstack;
}

- (unsigned long long)dispatchQueueSerialNumber;
- (int)threadState;
- (void)setThreadState:(int)arg1;
- (unsigned int)thread;
- (unsigned int)backtraceLength;
- (unsigned long long *)backtrace;
- (void)setLengthTime:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)removeTopmostFrame;
- (unsigned long long)topmostFrame;
- (_Bool)hasSameCallstack:(id)arg1;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t *)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (void)fixupStackWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 taskMemoryCache:(id)arg3;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTask:(unsigned int)arg1 thread:(unsigned int)arg2 is64Bit:(_Bool)arg3 taskMemoryCache:(id)arg4;
- (id)initWithTask:(unsigned int)arg1 thread:(unsigned int)arg2 is64Bit:(_Bool)arg3;
- (id)initWithSamplingContext:(struct sampling_context_t *)arg1 thread:(unsigned int)arg2;
- (struct _CSTypeRef)_symbolicator;

@end

@interface VMUProcInfo : NSObject
{
    unsigned int _task;
    _Bool _needTaskPortDealloc;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval _startTime;
}

+ (int)processParentId:(int)arg1;
+ (_Bool)isProcessRunning:(int)arg1;
+ (id)getProcessIds;
- (unsigned long long)hash;
- (long long)compareByUserAppName:(id)arg1;
- (long long)compareByName:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)signal:(int)arg1;
- (_Bool)terminate;
- (_Bool)isRunning;
- (_Bool)isNative;
- (int)cpuType;
- (_Bool)isCFM;
- (_Bool)isMachO;
- (_Bool)isApp;
- (void)update;
- (unsigned int)task;
- (int)ppid;
- (int)pid;
- (id)description;
- (id)name;
- (id)userAppName;
- (id)valueForEnvVar:(id)arg1;
- (id)envVars;
- (id)arguments;
- (id)firstArgument;
- (id)requestedAppName;
- (id)realAppName;
- (id)_infoFromCommandLine:(int)arg1;
- (id)procTableName;
- (struct timeval)startTime;
- (void)finalize;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithPid:(int)arg1;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface _VMULibraryLoadObserver : NSObject
{
    id <VMULibraryLoadDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialNotificationsQueue;
    struct _CSTypeRef _symbolicator;
}

- (void)stopObserving;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 delegate:(id)arg2;

@end

@interface VMUProcessDescription : NSObject <VMULibraryLoadDelegate>
{
    unsigned int _task;
    int _pid;
    NSString *_processName;
    _Bool _processNameNeedsCorrection;
    NSString *_executablePath;
    _VMULibraryLoadObserver *_loadUnloadObserver;
    _Bool _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    _Bool _is64Bit;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    _Bool _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    struct mapped_memory_t *_mappedMemory;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
}

+ (id)parseBinaryImagesDescription:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)analysisToolDescription;
- (id)dateAndVersionDescription;
- (id)processDescriptionHeader;
- (id)_systemVersionDescription;
- (id)_osVersionDictionary;
- (id)_buildInfoDescription;
- (id)_buildVersionDictionary;
- (id)binaryImagesDescription;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_cpuTypeDescription;
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;
- (id)binaryImages;
- (id)_bundleLock;
- (_Bool)isAppleApplication;
- (id)bundleIdentifier;
- (id)executablePath;
- (id)processVersion;
- (id)_sanitizeVersion:(id)arg1;
- (id)processVersionDictionary;
- (id)parentProcessName;
- (id)displayName;
- (id)processIdentifier;
- (id)processName;
- (int)cpuType;
- (int)pid;
- (unsigned int)task;
- (id)date;
- (void)_libraryLoaded:(struct _CSTypeRef)arg1;
- (void)_extractCrashReporterBinaryImageHintsFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)_readDataFromMemory:(struct mapped_memory_t *)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (id)_readStringFromMemory:(struct mapped_memory_t *)arg1 atAddress:(unsigned long long)arg2;
- (double)_extractDyldInfoFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2 getBinariesList:(_Bool)arg3;
- (void)clearCrashReporterInfo;
- (void)setCrashReporterInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface VMUCallTreeRoot : VMUCallTreeNode
{
    struct _CSTypeRef _symbolicator;
    VMUSampler *_sampler;
    unsigned long long _options;
    NSHashTable *_uniqueNodeNames;
    NSMapTable *_addressToSymbolNameMap;
    NSMapTable *_addressToLeafSymbolNameMap;
    NSMapTable *_threadPortToNameMap;
    NSMapTable *_dispatchQueueSerialNumToNameMap;
    NSString *_binaryImagesDescription;
    NSArray *_binaryImages;
}

- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(_Bool)arg1;
- (id)initWithCallGraphFile:(id)arg1 fileHeader:(id *)arg2 topFunctionsList:(id *)arg3 binaryImagesList:(id *)arg4;
- (void)addChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5;
- (id)addBacktrace:(id)arg1;
- (id)addBacktrace:(id)arg1 count:(unsigned int)arg2 numBytes:(unsigned long long)arg3;
- (id)descriptionStringForAddress:(unsigned long long)arg1 atTime:(unsigned long long)arg2 leafFrame:(_Bool)arg3 startOfRecursion:(_Bool)arg4;
- (id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long *)arg2;
- (void)dealloc;
- (void)allBacktracesHaveBeenAdded;
- (id)initWithSymbolicator:(struct _CSTypeRef)arg1 sampler:(id)arg2 options:(unsigned long long)arg3;

@end

__attribute__((visibility("hidden")))
@interface VMUCallTreeLeafNode : VMUCallTreeNode
{
    NSCountedSet *_addresses;
    NSString *_combinedName;
}

- (void)getBrowserName:(id)arg1;
- (void)addAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;

@end

@interface VMUClassInfoMap : NSObject <NSCoding>
{
    void *_cppMap;
}

+ (id)infoMap;
+ (void)initialize;
- (void)addClassInfosFromMap:(id)arg1;
- (id)classInfoForAddress:(unsigned long long)arg1;
- (void)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

@interface VMUVMRegion : NSObject
{
    struct _VMURange range;
    unsigned int prot;
    unsigned int maxProt;
    NSString *type;
    NSString *path;
    _Bool summarized;
    _Bool recalculate_pages_resident;
    unsigned char external_pager;
    unsigned char share_mode;
    int purgeable;
    unsigned long long virtual_pages;
    unsigned long long pages_resident;
    unsigned long long pages_shared_now_private;
    unsigned long long pages_swapped_out;
    unsigned long long pages_dirtied;
    unsigned long long ref_count;
    unsigned int user_tag;
    unsigned long long object_id;
    unsigned int nesting_depth;
    _Bool is_submap;
    unsigned long long mallocBlockCount;
    unsigned int mallocTypeFlag;
    unsigned long long pages_purgable_vol;
    unsigned long long pages_purgable_non_vol;
    unsigned long long pages_purgable_empty;
}

+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (id)breakAtLength:(unsigned long long)arg1;
- (void)addInfoFromRegion:(id)arg1;
- (_Bool)hasSameInfoAsRegion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSubmap;
- (unsigned long long)purgeablePageCount;
- (unsigned long long)swappedOutPageCount;
- (unsigned long long)sharedNowPrivatePageCount;
- (unsigned long long)dirtyPageCount;
- (unsigned long long)residentPageCount;
- (unsigned long long)virtualPageCount;
- (unsigned int)maxProtection;
- (unsigned int)protection;
- (id)path;
- (id)type;
- (struct _VMURange)range;
- (id)description;
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

@interface VMUTaskMemoryScanner : NSObject
{
    unsigned int _task;
    VMUObjectIdentifier *_objectIdentifier;
    VMUVMRegionIdentifier *_regionIdentifier;
    struct _VMUBlockNode *_blocks;
    unsigned int _blocksCount;
    unsigned int _blocksSize;
    struct _VMURegionNode *_regions;
    unsigned int _regionsCount;
    unsigned int _regionsSize;
    struct _VMURegionMap *_regionMap;
    struct _VMUZoneNode *_zones;
    unsigned int _zonesCount;
    unsigned int _zonesSize;
    struct _VMUThreadNode *_threads;
    unsigned int _threadsCount;
    id *_classInfos;
    unsigned int _classInfosCount;
    _Bool _exactScanningEnabled;
    unsigned long long _maxInteriorOffset;
    int _scanningMask;
    CDUnknownBlockType _referenceLogger;
    CDUnknownBlockType _nodeLogger;
}

@property(nonatomic) int scanningMask; // @synthesize scanningMask=_scanningMask;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_blocksCount;
@property(nonatomic) _Bool exactScanningEnabled; // @synthesize exactScanningEnabled=_exactScanningEnabled;
@property(nonatomic) unsigned long long maxInteriorOffset; // @synthesize maxInteriorOffset=_maxInteriorOffset;
- (id)referenceDescription:(CDStruct_df82e459)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 symbolicator:(struct _CSTypeRef)arg4 alignmentSpacing:(unsigned int)arg5;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (id)nodeDescription:(unsigned int)arg1;
- (void)setReferenceScanningLogger:(CDUnknownBlockType)arg1;
- (void)setNodeScanningLogger:(CDUnknownBlockType)arg1;
- (void)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int mallocNodeCount;
- (void *)contentForNode:(unsigned int)arg1;
- (id)labelForMallocNode:(unsigned int)arg1;
- (id)zoneNameForNode:(unsigned int)arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
- (id)scanNodesIntoGraph;
- (void)scanNodesForReferences:(CDUnknownBlockType)arg1;
- (void)removeRootReachableNodes;
- (void)_orderedScanWithScanner:(CDUnknownBlockType)arg1 recorder:(CDUnknownBlockType)arg2 keepMapped:(_Bool)arg3 actions:(CDUnknownBlockType)arg4;
- (void)orderedNodeTraversal:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_withOrderedNodeMapper:(CDUnknownBlockType)arg1;
- (void)_withScanningContext:(CDUnknownBlockType)arg1;
- (void)_fixupBlockIsas;
- (void)addMallocNodes:(id)arg1;
- (void)addMallocNodesFromTask;
- (void)_sortBlocks;
- (void)addRootNodesFromTask;
- (void)_callRemoteMallocEnumerators:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)_withMemoryReaderBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)detachFromTask;
- (_Bool)_suspend;
- (id)initWithTask:(unsigned int)arg1;

@end

@interface VMUDirectedGraph : NSObject
{
    unsigned int _nodeCount;
    unsigned int _edgeCount;
    unsigned int _nextNodeName;
    unsigned int _nextEdgeName;
    struct _VMUDirectedGraphNode *_nodes;
    struct _VMUDirectedGraphEdge *_edges;
    unsigned int *_nodeNameMap;
    unsigned int _edgeCapacity;
    _Bool _needsAdjacencyUpdate;
}

+ (void)initialize;
@property(readonly, nonatomic) unsigned int edgeNamespaceSize; // @synthesize edgeNamespaceSize=_nextEdgeName;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize; // @synthesize nodeNamespaceSize=_nextNodeName;
@property(readonly, nonatomic) unsigned int edgeCount; // @synthesize edgeCount=_edgeCount;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_nodeCount;
- (void)invertEdges;
- (void)_dumpAdjacencyList;
- (void)breadthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
- (void)depthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
- (void)_searchMainLoop:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;
- (void)_bfsCore:(unsigned int)arg1 colors:(unsigned char *)arg2 nodeBlock:(CDUnknownBlockType)arg3 edgeBlock:(CDUnknownBlockType)arg4;
- (void)_dfsCore:(unsigned int)arg1 colors:(unsigned char *)arg2 nodeBlock:(CDUnknownBlockType)arg3 edgeBlock:(CDUnknownBlockType)arg4;
- (void)withEdgeMarkingMap:(CDUnknownBlockType)arg1;
- (void)withNodeMarkingMap:(CDUnknownBlockType)arg1;
- (id)invertedGraph;
- (id)subgraphWithMarkedNodes:(void *)arg1 edges:(void *)arg2;
- (void)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)_adjustAdjacencyMap;
- (void)dealloc;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (id)initWithNodes:(unsigned int)arg1;

@end

@interface VMUObjectGraph : VMUDirectedGraph
{
    struct _VMUObjectGraphEdge *_referenceTable;
    unsigned int _referenceTableCount;
    unsigned int _referenceTableCapacity;
    CDStruct_599faf0f *_internalizedNodes;
    CDUnknownBlockType _nodeProvider;
}

- (void)invertEdges;
- (CDStruct_df82e459)referenceInfoWithName:(unsigned int)arg1;
- (CDStruct_599faf0f)nodeWithName:(unsigned int)arg1;
- (void)enumerateReferencesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateReferencesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMarkedObjects:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 sourceOffset:(unsigned long long)arg2 withScanType:(int)arg3 toNode:(unsigned int)arg4 destinationOffset:(unsigned long long)arg5;
- (void)internalizeNodes;
- (void)dealloc;
- (id)initWithNodes:(unsigned int)arg1 nodeProvider:(CDUnknownBlockType)arg2;

@end
