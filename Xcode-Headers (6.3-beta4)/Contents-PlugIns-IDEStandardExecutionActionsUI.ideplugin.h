//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

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

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/IDEStandardExecutionActionsUI.ideplugin/Contents/MacOS/IDEStandardExecutionActionsUI
// UUID: 860455F7-3904-3809-964B-AEEC7A0AE53D
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

@protocol DVTCompletingTextViewDelegate <NSTextViewDelegate>

@optional
- (void)setupTextViewContextMenuWithMenu:(NSMenu *)arg1;
- (BOOL)completingTextViewHandleCancel:(DVTCompletingTextView *)arg1;
- (unsigned long long)textView:(DVTCompletingTextView *)arg1 lineEndingForWritingSelectionToPasteboard:(NSPasteboard *)arg2 type:(NSString *)arg3;
- (unsigned long long)textView:(DVTCompletingTextView *)arg1 lineEndingForReadingSelectionFromPasteboard:(NSPasteboard *)arg2 type:(NSString *)arg3;
- (void)textView:(DVTCompletingTextView *)arg1 layoutManager:(NSLayoutManager *)arg2 didLayoutGlyphsUpToCharacterIndex:(unsigned long long)arg3;
- (DVTTextDocumentLocation *)completingTextView:(DVTCompletingTextView *)arg1 documentLocationForWordStartLocation:(unsigned long long)arg2;
- (void)completingTextView:(DVTCompletingTextView *)arg1 willPassContextToStrategies:(NSMutableDictionary *)arg2 atWordStartLocation:(unsigned long long)arg3;
@end

@protocol DVTSourceTextViewDelegate <DVTCompletingTextViewDelegate>

@optional
- (double)textView:(DVTSourceTextView *)arg1 constrainAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(DVTSourceTextView *)arg1 constrainMaxAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(DVTSourceTextView *)arg1 constrainMinAccessoryAnnotationWidth:(double)arg2;
- (NSString *)textViewWillReturnPrintJobTitle:(DVTSourceTextView *)arg1;
- (void)textViewDidScroll:(DVTSourceTextView *)arg1;
- (void)setupGutterContextMenuWithMenu:(NSMenu *)arg1;
- (void)tokenizableRangesWithRange:(struct _NSRange)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)textViewDidFinishAnimatingScroll:(DVTSourceTextView *)arg1;
- (void)textViewDidLoadAnnotationProviders:(DVTSourceTextView *)arg1;
- (void)textView:(DVTSourceTextView *)arg1 didRemoveAnnotations:(NSArray *)arg2;
- (void)textView:(DVTSourceTextView *)arg1 didAddAnnotations:(NSArray *)arg2;
- (DVTAnnotationContext *)annotationContextForTextView:(DVTSourceTextView *)arg1;
- (NSDictionary *)syntaxColoringContextForTextView:(DVTSourceTextView *)arg1;
- (void)textViewDidChangeFolding:(NSNotification *)arg1;
- (void)textViewWillChangeFolding:(NSNotification *)arg1;
- (void)textView:(DVTSourceTextView *)arg1 didClickOnTemporaryLinkAtCharacterIndex:(unsigned long long)arg2 event:(NSEvent *)arg3 isAltEvent:(BOOL)arg4;
- (BOOL)textView:(DVTSourceTextView *)arg1 shouldShowTemporaryLinkForCharacterAtIndex:(unsigned long long)arg2 proposedRange:(struct _NSRange)arg3 effectiveRanges:(id *)arg4;
- (void)textView:(DVTSourceTextView *)arg1 handleMouseDidExitSidebar:(NSEvent *)arg2;
- (void)textView:(DVTSourceTextView *)arg1 handleMouseDidMoveOverSidebar:(NSEvent *)arg2 atLineNumber:(unsigned long long)arg3;
- (void)textView:(DVTSourceTextView *)arg1 handleMouseDownInSidebar:(NSEvent *)arg2 atLineNumber:(unsigned long long)arg3;
@end

@protocol DVTTextStorageDelegate <NSTextStorageDelegate>

@optional
@property(readonly, nonatomic) NSDictionary *sourceLanguageServiceContext;
- (void)sourceLanguageServiceAvailabilityNotification:(BOOL)arg1 message:(NSString *)arg2;
- (BOOL)textStorageShouldAllowEditing:(DVTTextStorage *)arg1;
- (void)textStorageDidUpdateSourceLandmarks:(DVTTextStorage *)arg1;
- (long long)nodeTypeForItem:(DVTSourceModelItem *)arg1 withContext:(NSDictionary *)arg2;
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

@protocol NSTextDelegate <NSObject>

@optional
- (void)textDidChange:(NSNotification *)arg1;
- (void)textDidEndEditing:(NSNotification *)arg1;
- (void)textDidBeginEditing:(NSNotification *)arg1;
- (BOOL)textShouldEndEditing:(NSText *)arg1;
- (BOOL)textShouldBeginEditing:(NSText *)arg1;
@end

@protocol NSTextStorageDelegate <NSObject>

@optional
- (void)textStorageDidProcessEditing:(NSNotification *)arg1;
- (void)textStorageWillProcessEditing:(NSNotification *)arg1;
@end

@protocol NSTextViewDelegate <NSTextDelegate>

@optional
- (void)textView:(NSTextView *)arg1 draggedCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 event:(NSEvent *)arg4;
- (void)textView:(NSTextView *)arg1 doubleClickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3;
- (void)textView:(NSTextView *)arg1 clickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3;
- (BOOL)textView:(NSTextView *)arg1 clickedOnLink:(id)arg2;
- (NSUndoManager *)undoManagerForTextView:(NSTextView *)arg1;
- (NSSharingServicePicker *)textView:(NSTextView *)arg1 willShowSharingServicePicker:(NSSharingServicePicker *)arg2 forItems:(NSArray *)arg3;
- (NSURL *)textView:(NSTextView *)arg1 URLForContentsOfTextAttachment:(NSTextAttachment *)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)textView:(NSTextView *)arg1 didCheckTextInRange:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(NSDictionary *)arg4 results:(NSArray *)arg5 orthography:(NSOrthography *)arg6 wordCount:(long long)arg7;
- (NSDictionary *)textView:(NSTextView *)arg1 willCheckTextInRange:(struct _NSRange)arg2 options:(NSDictionary *)arg3 types:(unsigned long long *)arg4;
- (NSMenu *)textView:(NSTextView *)arg1 menu:(NSMenu *)arg2 forEvent:(NSEvent *)arg3 atIndex:(unsigned long long)arg4;
- (long long)textView:(NSTextView *)arg1 shouldSetSpellingState:(long long)arg2 range:(struct _NSRange)arg3;
- (BOOL)textView:(NSTextView *)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)textView:(NSTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (NSArray *)textView:(NSTextView *)arg1 completions:(NSArray *)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (NSString *)textView:(NSTextView *)arg1 willDisplayToolTip:(NSString *)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (void)textViewDidChangeTypingAttributes:(NSNotification *)arg1;
- (void)textViewDidChangeSelection:(NSNotification *)arg1;
- (NSDictionary *)textView:(NSTextView *)arg1 shouldChangeTypingAttributes:(NSDictionary *)arg2 toAttributes:(NSDictionary *)arg3;
- (BOOL)textView:(NSTextView *)arg1 shouldChangeTextInRanges:(NSArray *)arg2 replacementStrings:(NSArray *)arg3;
- (NSArray *)textView:(NSTextView *)arg1 willChangeSelectionFromCharacterRanges:(NSArray *)arg2 toCharacterRanges:(NSArray *)arg3;
- (struct _NSRange)textView:(NSTextView *)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)textView:(NSTextView *)arg1 writeCell:(id <NSTextAttachmentCell>)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(NSPasteboard *)arg4 type:(NSString *)arg5;
- (NSArray *)textView:(NSTextView *)arg1 writablePasteboardTypesForCell:(id <NSTextAttachmentCell>)arg2 atIndex:(unsigned long long)arg3;
- (void)textView:(NSTextView *)arg1 draggedCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 event:(NSEvent *)arg4 atIndex:(unsigned long long)arg5;
- (void)textView:(NSTextView *)arg1 doubleClickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(NSTextView *)arg1 clickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)textView:(NSTextView *)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
@end

@interface IDEShellScriptExecutionActionViewController : IDEActionSliceViewController <DVTSourceTextViewDelegate, DVTTextStorageDelegate>
{
    DVTScriptSourceTextView *_sourceView;
    NSScrollView *_sourceScrollView;
    NSTextField *_shellTextField;
    NSPopUpButton *_targetBuildSettingProviderPopUp;
    BOOL _willRebuild;
    DVTNotificationToken *_frameChangeToken;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_updateTargetBuildSettingProviderPopUp;
- (id)_iconForBuildable:(id)arg1;
- (void)_targetBuildSettingProviderSelected:(id)arg1;
- (void)_updateTargetBuildSettingProviderPopUpSelection;
- (void)_reallyRebuildLayout;
- (void)_rebuildLayout;
- (void)viewWillUninstall;
- (void)viewFrameChanged:(id)arg1;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)awakeFromNib;
@property(readonly) IDEShellScriptExecutionAction *scriptAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *sourceLanguageServiceContext;
@property(readonly) Class superclass;

@end

@interface IDEAppleScriptExecutionActionViewController : IDEActionSliceViewController
{
}

@end

@interface IDESendEmailExecutionActionViewController : IDEActionSliceViewController
{
    NSTextField *_toField;
    NSTextField *_subjectField;
    NSTextView *_bodyTextView;
    NSScrollView *_bodyScrollView;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(readonly) IDESendEmailExecutionAction *sendEmailAction;

@end

@interface IDEAlertExecutionActionViewController : IDEActionSliceViewController
{
}

@end

@interface IDEAutomatorWorkflowExecutionActionViewController : IDEActionSliceViewController
{
}

@end

