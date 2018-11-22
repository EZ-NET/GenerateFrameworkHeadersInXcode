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
    double width;
    double height;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long localIndex;
    unsigned long long localCount;
    unsigned long long globalIndex;
    unsigned long long globalCount;
} CDStruct_3e55db63;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
// UUID: CB4542CE-FBF9-3BC2-AE52-1B6FC526F9D6
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 1134.1.1.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol ABPeoplePickerNavigationControllerDelegate <NSObject>

@optional
- (_Bool)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(ABPeoplePickerNavigationController *)arg1;
- (void)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 didSelectPerson:(void *)arg2;
@end

@protocol MSTrackListHeaderDelegate <NSObject>
- (NSArray *)purchasableItemsForHeaderView:(MSTrackListHeaderView *)arg1;
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

@protocol UIActionSheetDelegate <NSObject>

@optional
- (void)actionSheet:(UIActionSheet *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(UIActionSheet *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentActionSheet:(UIActionSheet *)arg1;
- (void)willPresentActionSheet:(UIActionSheet *)arg1;
- (void)actionSheetCancel:(UIActionSheet *)arg1;
- (void)actionSheet:(UIActionSheet *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

@protocol UIAlertViewDelegate <NSObject>

@optional
- (_Bool)alertViewShouldEnableFirstOtherButton:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertView:(UIAlertView *)arg1;
- (void)willPresentAlertView:(UIAlertView *)arg1;
- (void)alertViewCancel:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

@interface MSPurchaseBatch : SUPurchaseBatch
{
}

- (id)copyContinuationsForPurchases:(id)arg1;

@end

@interface MSTonePurchaseContinuation : SUPurchaseContinuation <ABPeoplePickerNavigationControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    ABPeoplePickerNavigationController *_peoplePicker;
}

- (void)_showPeoplePicker;
- (void)_pickAssigneeToneStyle;
- (void)_dismissPeoplePicker;
- (void)_destroyAlertView;
- (void)_destroyActionSheet;
- (id)_copyAllowedToneStyles;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (id)initWithPurchase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface MSViewControllerFactory : SUViewControllerFactory
{
}

- (id)newVolumeViewController;
- (id)newViewControllerForTrackList:(id)arg1;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2;
- (id)newPlaceholderViewController;
- (id)newNetworkLockoutViewControllerWithSection:(id)arg1;
- (id)newDownloadsViewController;
- (id)newDownloadManagerOptions;

@end

@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration
{
    CDStruct_3e55db63 _position;
}

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (id)copyDefaultContext;
@property(nonatomic) CDStruct_3e55db63 position; // @synthesize position=_position;
- (_Bool)showContentRating;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (void)drawBackgroundWithModifiers:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)init;

@end

@interface MSTrackListCellContext : SUMediaItemCellContext
{
    _Bool _shouldHideContentRating;
    _Bool _showSubtitle;
}

@property(nonatomic) _Bool showSubtitle; // @synthesize showSubtitle=_showSubtitle;
@property(nonatomic) _Bool shouldHideContentRating; // @synthesize shouldHideContentRating=_shouldHideContentRating;

@end

@interface MSTrackListLinkCellConfiguration : SUItemCellConfiguration
{
}

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)init;

@end

@interface MSTrackListLoadMoreCellConfiguration : SULoadMoreMediaCellConfiguration
{
}

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1;
- (void)reloadLayoutInformation;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;

@end

@interface MSStructuredPageTableDataSource : SUStructuredPageGroupedTableDataSource
{
}

- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id *)arg2;
- (_Bool)canDoubleTapIndexPath:(id)arg1;
- (_Bool)canShowPreviewForItem:(id)arg1;

@end

@interface MSTrackListDataSource : MSStructuredPageTableDataSource
{
}

- (id)_stylesheetString;
- (long long)tableViewStyle;
- (id)placeholderCellForIndexPath:(id)arg1;
- (void)reloadCellContexts;
- (double)heightForPlaceholderCells;
- (id)headerViewForSection:(long long)arg1;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (id)cellConfigurationForIndex:(long long)arg1 item:(id)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (_Bool)canShowItemOfferButtonForItem:(id)arg1;
- (_Bool)canShowPreviewForItem:(id)arg1;
- (_Bool)canDoubleTapIndexPath:(id)arg1;

@end

@interface MSTrackListCopyrightFooterView : UIView
{
    struct CGSize _textSize;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (struct CGSize)_textSize;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

@interface MSTrackListHeaderView : UIView
{
    id <MSTrackListHeaderDelegate> _delegate;
    UIImage *_artworkImage;
    SUItem *_item;
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    UILabel *_disclaimerLabel;
    UILabel *_itemCountLabel;
    UILabel *_releaseDateLabel;
    SUReflectionImageView *_artworkView;
    SUItemOfferButton *_offerButton;
    SUTouchCaptureView *_touchCaptureView;
}

@property(retain, nonatomic) SUItem *item; // @synthesize item=_item;
@property(nonatomic) id <MSTrackListHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (struct CGSize)_sizeThatFitsLabel:(id)arg1 size:(struct CGSize)arg2 numberOfLines:(long long)arg3;
- (void)_showPurchaseConfirmation;
- (void)_setShowingPurchaseConfirmation:(_Bool)arg1;
- (void)_reloadReleaseDateLabel;
- (void)_reloadOfferButton;
- (void)_reloadItemCountLabel;
- (void)_reloadDisclaimerLabel;
- (void)_reloadArtworkView;
- (void)_reloadArtistLabel;
- (void)_reloadAlbumLabel;
- (void)_performPurchaseAnimation;
- (id)_newGenericSmallFontLabel;
- (void)_hidePurchaseConfirmation;
- (void)_purchasesChangedNotification:(id)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (void)_offerButtonAction:(id)arg1;
- (void)sizeToFit;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)reloadView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface MSTrackListTableHeaderView : UIView
{
    struct CGSize _titleSize;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

@interface MSPurchasesViewController : SUViewController
{
    long long _activeViewControllerIndex;
    UIView *_containerView;
    SUSegmentedControl *_segmentedControl;
    NSArray *_viewControllers;
}

- (void)_showActiveViewController;
- (void)_setActiveViewControllerIndex:(long long)arg1;
- (void)_reloadViewControllersWithSection:(id)arg1;
- (void)_reloadSegmentedControlPlacement;
- (id)_newViewControllerForPageSection:(id)arg1;
- (id)_newSegmentedControlWithPageSectionGroup:(id)arg1;
- (id)_activeViewController;
- (void)_tabConfigurationChangedNotification:(id)arg1;
- (void)_segmentedControlAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)loadView;
- (void)invalidateForMemoryPurge;
- (id)copyArchivableContext;
- (void)dealloc;
- (id)initWithSection:(id)arg1;

@end

@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController
{
    SUSegmentedControl *_inlineSegmentedControl;
    NSIndexPath *_previewIndexPath;
    SUAudioPlayer *_previewPlayer;
    SUPlayerStatus *_previewStatus;
}

- (void)_stopPreviewPlayback;
- (void)_setPreviewStatus:(id)arg1 forIndexPath:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_handlePreviewForIndexPath:(id)arg1;
- (_Bool)_handleMediaPreviewForIndexPath:(id)arg1;
- (_Bool)_handleInlinePreviewForIndexPath:(id)arg1;
- (void)_playerStatusChangeNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setLoading:(_Bool)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (_Bool)purchaseItemAtIndexPath:(id)arg1;
- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (_Bool)canSelectRowAtIndexPath:(id)arg1;
- (_Bool)canDisplaySectionGroup:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (id)init;

@end

@interface MSTrackListViewController : MSStructuredPageViewController <MSTrackListHeaderDelegate>
{
    MSTrackListHeaderView *_headerView;
}

- (void)_reloadHeaderView;
- (void)_reloadFooterView;
- (id)_newPlaceholderImage;
- (id)_newImageDataProvider;
- (id)_headerArtworkItemImage;
- (id)_headerArtworkImage;
- (void)_webViewsLoaded:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_delayedReloadForWebViews;
- (id)purchasableItemsForHeaderView:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadData;
- (void)loadView;
- (id)newTermsAndConditionsFooter;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface MSVolumeViewController : SUViewController
{
}

- (void)loadView;

@end

@interface MSAudioProgressView : UIView
{
    UIImageView *_bufferingImageView;
    NSObject<OS_dispatch_source> *_bufferingTimer;
    _Bool _highlighted;
    SUPlayerStatus *_playerStatus;
    MSPieImageView *_progressView;
    UIImageView *_stopImageView;
}

@property(copy, nonatomic) SUPlayerStatus *playerStatus; // @synthesize playerStatus=_playerStatus;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)_showBufferingImageView;
- (id)_newProgressView;
- (id)_newBufferingImageView;
- (void)_cancelBufferingTimer;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface MSPieImageView : UIView
{
    UIImage *_backgroundImage;
    UIBezierPath *_clipPath;
    UIImage *_foregroundImage;
    double _pieFraction;
    double _pieRadius;
}

@property(nonatomic) double pieRadius; // @synthesize pieRadius=_pieRadius;
@property(nonatomic) double pieFraction; // @synthesize pieFraction=_pieFraction;
@property(retain, nonatomic) UIImage *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void)_reloadClipPath;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

@interface MSTableCell : SUTableCell
{
    UIImageView *_backsideSnapshotView;
    UIView *_previewContainerView;
    MSAudioProgressView *_previewProgressView;
    SUPlayerStatus *_previewStatus;
}

@property(retain, nonatomic) SUPlayerStatus *previewStatus; // @synthesize previewStatus=_previewStatus;
- (void)_flipToPreviewProgressView;
- (void)_flipFromPreviewProgressView;
- (void)_destroyPreviewProgressView;
- (void)setPreviewStatus:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;

@end

