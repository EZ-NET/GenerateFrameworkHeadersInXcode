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

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/GPUDebuggerKit.ideplugin/Contents/MacOS/GPUDebuggerKit
// UUID: F7E96F49-988F-3F94-9715-E7FBED78F9E1
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 16740.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol IDEDebugCompressionStrategy <NSObject>
+ (DVTFilePath *)genericMaskFilePathWithColorsInRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
+ (DVTFilePath *)maskFilePathForUserCodeWithColorsInRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
+ (DVTFilePath *)maskFilePathForModulePathString:(NSString *)arg1 withColorsInRed:(double *)arg2 green:(double *)arg3 blue:(double *)arg4 alpha:(double *)arg5;
- (NSIndexSet *)compressStackFrames:(NSArray *)arg1 level:(unsigned long long)arg2;
@end

@protocol IDEDebugNavigableModel <NSObject>
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@end

@protocol IDEKeyDrivenNavigableItemRepresentedObject <NSObject>
@property(readonly) NSString *navigableItem_name;

@optional
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) NSImage *navigableItem_image;
- (DVTDocumentLocation *)navigableItem_contentDocumentLocationInDocumentURL:(NSURL *)arg1;
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

@interface GPUTraceGroupNavigableItem : IDEKeyDrivenNavigableItem
{
    BOOL _showOnlyInterestingTrace;
    BOOL _hideEmptyMarkerGroups;
    BOOL _hideGroupMarkerCalls;
    NSMutableArray *_cachedChildRepresentedObjects;
}

@property BOOL hideGroupMarkerCalls; // @synthesize hideGroupMarkerCalls=_hideGroupMarkerCalls;
@property BOOL hideEmptyMarkerGroups; // @synthesize hideEmptyMarkerGroups=_hideEmptyMarkerGroups;
@property BOOL showOnlyInterestingTrace; // @synthesize showOnlyInterestingTrace=_showOnlyInterestingTrace;
- (void).cxx_destruct;
- (BOOL)setHideEmptyMarkerGroups:(BOOL)arg1 hideGroupMarkerCalls:(BOOL)arg2;
- (BOOL)setShowOnlyInterestingTrace:(BOOL)arg1 hideEmptyMarkerGroups:(BOOL)arg2 hideGroupMarkerCalls:(BOOL)arg3;
- (void)invalidateChildItems;
- (id)childRepresentedObjects;
- (void)_filterGroup:(id)arg1;
- (BOOL)_isNotHiddenStateItem:(id)arg1;
- (id)subtitle;
- (void)primitiveInvalidate;
- (void)_clearCachedItems;
- (id)initWithRepresentedObject:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface GPUTraceProgramGroupNavigableItem : IDEKeyDrivenNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    GPUTraceDocumentLocation *_cachedLocation;
    BOOL _displayRelatedDisplayables;
}

- (void).cxx_destruct;
- (BOOL)displayRelatedDisplayables:(BOOL)arg1;
- (void)invalidateChildItems;
- (id)childRepresentedObjects;
- (id)contentDocumentLocation;
- (id)name;
- (id)image;
- (id)documentType;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithRepresentedObject:(id)arg1;

@end

@interface GPUScrubberInfo : NSObject
{
    IDEWorkspaceTabController *_tabController;
    unsigned long long _displayableLocation;
    id _sender;
    int _direction;
}

@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) id sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) unsigned long long displayableLocation; // @synthesize displayableLocation=_displayableLocation;
@property(readonly, nonatomic) IDEWorkspaceTabController *tabController; // @synthesize tabController=_tabController;
- (void).cxx_destruct;
- (id)initWithSender:(id)arg1 workspaceTabController:(id)arg2 displayableLocation:(unsigned long long)arg3 direction:(int)arg4;

@end

@interface GPUTraceAPINavigableItem : IDEKeyDrivenNavigableItem
{
    long long _compressionValue;
    long long _maxCompressionValue;
    NSArray *_cachedChildRepresentedObjects;
    NSIndexSet *_lastCompressedIndexSet;
}

- (void).cxx_destruct;
- (BOOL)setCompressionValue:(long long)arg1 maxCompressionValue:(long long)arg2;
- (void)invalidateChildItems;
- (id)childRepresentedObjects;
- (id)initWithRepresentedObject:(id)arg1;

@end

@interface GPUCompressedStackFrameNavigableItem : IDEKeyDrivenNavigableItem
{
}

- (id)initWithStackFrames:(id)arg1 parent:(id)arg2;

@end

@interface GPUCompressedStackFrame : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, IDEDebugNavigableModel>
{
    NSArray *_representedStackFrames;
}

@property(readonly) NSArray *representedStackFrames; // @synthesize representedStackFrames=_representedStackFrames;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
- (BOOL)isGroupHeader:(id)arg1;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSNumber *frameNumber;
- (id)initWithStackFrames:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface GPUCompressionInfoProvider : NSObject
{
    CDUnknownBlockType _debugInfoForIndexQueryBlock;
    CDUnknownBlockType _libraryNameForIndexQueryBlock;
}

@property(readonly) CDUnknownBlockType libraryNameForIndexQueryBlock; // @synthesize libraryNameForIndexQueryBlock=_libraryNameForIndexQueryBlock;
@property(readonly) CDUnknownBlockType debugInfoForIndexQueryBlock; // @synthesize debugInfoForIndexQueryBlock=_debugInfoForIndexQueryBlock;
- (void).cxx_destruct;
- (id)initWithDebugInfoQueryBlock:(CDUnknownBlockType)arg1 libraryNameQueryBlock:(CDUnknownBlockType)arg2;

@end

__attribute__((visibility("hidden")))
@interface GPUStackFramesDefaultCompressionStrategy : NSObject <IDEDebugCompressionStrategy>
{
}

+ (id)genericMaskFilePathWithColorsInRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
+ (id)maskFilePathForUserCodeWithColorsInRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
+ (id)maskFilePathForModulePathString:(id)arg1 withColorsInRed:(double *)arg2 green:(double *)arg3 blue:(double *)arg4 alpha:(double *)arg5;
+ (id)_filePathForBlock:(CDUnknownBlockType)arg1 withColorsInRed:(double *)arg2 green:(double *)arg3 blue:(double *)arg4 alpha:(double *)arg5;
+ (id)sharedInstance;
- (id)compressStackFrames:(id)arg1 level:(unsigned long long)arg2;
- (unsigned long long)defaultCompressionLevel;
- (unsigned long long)maxCompressionLevel;
- (id)_initInternal;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface GPUNavigatorCompressedDataCell : DVTImageAndTextCell
{
    NSColor *_color;
}

@property(copy) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (void)_ide_commonInit;

@end

@interface GPUStackFrameNavigableItem : IDEFileNavigableItem
{
}

- (id)contentDocumentLocation;
- (id)name;
- (id)documentType;
- (id)newImage;
- (id)fileURL;
- (id)_stackFrame;

@end

@interface GPUProcessNavigableItem : GPUTraceGroupNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    BOOL _showsGauges;
    int _callOrProgramMode;
    int _programSortMode;
}

+ (id)keyPathsForValuesAffectinImage;
+ (id)keyPathsForValuesAffectingName;
@property(nonatomic) BOOL showsGauges; // @synthesize showsGauges=_showsGauges;
@property(nonatomic) int programSortMode; // @synthesize programSortMode=_programSortMode;
@property(nonatomic) int callOrProgramMode; // @synthesize callOrProgramMode=_callOrProgramMode;
- (void).cxx_destruct;
- (void)invalidateChildItems;
- (void)addGaugeItemsToChildObjects:(id)arg1;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (id)image;
- (id)subtitle;
- (id)name;
- (id)initWithRepresentedObject:(id)arg1;

@end

@interface GPUTraceSession (GPUTraceSessionNavigableItemPropertySupport)
@property(readonly) NSArray *navigableTraceGroupItems;
@end

@interface GPUTraceOutlineItem (GPUTraceOutlineItemNavigableItemPropertySupport) <IDEKeyDrivenNavigableItemRepresentedObject>
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

@interface GPUTraceAPIItem (GPUTraceOutlineItemNavigableItemPropertySupport) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingNavigableItem_subtitle;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
- (id)maxSeverityImage;
@property(readonly) int maxIssueSeverity;
- (id)navigableItem_subtitle;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

@interface GPUTraceGroupItem (GPUTraceOutlineItemNavigableItemPropertySupport) <IDEKeyDrivenNavigableItemRepresentedObject>
- (id)maxSeverityImage;
@property(readonly) int maxIssueSeverity;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) struct DYShaderProfilerTiming shaderTime;
@property(readonly) Class superclass;
@end

@interface GPUTraceResources (GPUTraceOutlineItemNavigableItemPropertySupport) <IDEKeyDrivenNavigableItemRepresentedObject>
- (id)gputraceResources_children;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

@interface GPUTraceResourceItem (GPUTraceOutlineItemNavigableItemPropertySupport)
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_name;
- (id)navigableItem_image;
- (id)navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;
@end

@interface GPUInvestigatorReportItem (GPUTraceOutlineItemNavigableItemPropertySupport) <IDEKeyDrivenNavigableItemRepresentedObject>
@property(readonly) NSImage *navigableItem_image;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

@interface GPUReportDocumentLocation (GPUTraceOutlineItemNavigableItemPropertySupport)
- (id)navigableItem_image;
- (id)navigableItem_name;
@end

@interface DYAnalyzerFinding (GPUDYAnalyzerFindingAdditions)
@property(readonly, nonatomic) BOOL isRedundantOrInefficientState;
@property(readonly, nonatomic) unsigned long long severity;
@property(readonly, nonatomic) int issueType;
@end

@interface GPUStackFrame (GPUTraceOutlineItemNavigableItemPropertySupport)
- (id)contentDelegateUIExtensionIdentifier;
- (id)associatedProcessUUID;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSImage *navigableItem_image;
- (id)gpudebugger_createImageFromFilePath:(id)arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
- (id)gpudebugger_uti;
- (id)gpudebugger_sourceURL;
@end

