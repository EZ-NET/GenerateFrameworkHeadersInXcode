//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct ShadowInfo {
    id _field1;
    double _field2;
    struct CGSize _field3;
    double _field4;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
// UUID: 24EBE81A-5F9C-3ACA-BA19-2B1CC676F52D
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 667.17.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol Clock
@property(readonly, nonatomic) int runMode;
- (void)stop;
- (void)start;
- (void)updateTime;

@optional
- (double)coarseUpdateInterval;
- (double)updateInterval;
- (void)updateTimeContinuously:(long long)arg1;
- (void)updateFlutter;
@end

@protocol HandView <NSObject>
@end

@protocol MTDateLabelObserver <NSObject>

@optional
- (void)dateLabel:(MTDateLabel *)arg1 timeDesignatorDidChange:(NSString *)arg2;
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

@interface TableCellAnalogClockView : AnalogClockView
{
}

+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotImageForDaytime:(_Bool)arg1;
+ (id)makeClockHand:(int)arg1 daytime:(_Bool)arg2;
+ (id)makeClockFaceForDaytime:(_Bool)arg1;
+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (struct CGPoint)handRotationalCenterForHand:(int)arg1;
+ (_Bool)doesFaceHaveShadow;
+ (double)faceRadius;
+ (id)resourcePath;
+ (int)style;
- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

@interface PagingLandscapeAnalogClockView : AnalogClockView
{
}

+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (double)faceRadius;
+ (int)style;

@end

@interface DigitalClockLabel : MTDateLabel
{
    NSCalendar *_calendar;
    NSDate *_baseDate;
    long long _hour;
    long long _minute;
}

- (void)forceSetHour:(long long)arg1 minute:(long long)arg2;
- (_Bool)setHour:(long long)arg1 minute:(long long)arg2;
- (void)refreshUI;
- (void)resetFontSizes;
- (void)significantTimeChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface AlarmManager : NSObject
{
    NSString *_defaultSound;
    long long _defaultSoundType;
    _Bool _dirty;
    NSMutableArray *_alarms;
    _Bool invalidAlarmsDetected;
    NSMutableArray *logMessageList;
    NSDate *lastModified;
}

+ (id)copyReadAlarmsFromPreferences;
+ (void)writeAlarmsToPreferences:(id)arg1;
+ (_Bool)discardOldVersion;
+ (_Bool)upgrade;
+ (_Bool)isAlarmNotification:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified;
@property(readonly, retain, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property(nonatomic) _Bool invalidAlarmsDetected; // @synthesize invalidAlarmsDetected;
@property(retain, nonatomic) NSMutableArray *logMessageList; // @synthesize logMessageList;
- (void)handleNotificationFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1;
- (void)handleExpiredOrSnoozedNotificationsOnly:(id)arg1;
- (void)handleAnyNotificationChanges;
- (void)reloadScheduledNotificationsWithRefreshActive:(_Bool)arg1 cancelUnused:(_Bool)arg2;
- (void)reloadScheduledNotifications;
- (void)loadScheduledNotificationsWithCancelUnused:(_Bool)arg1;
- (void)loadScheduledNotifications;
- (void)handleAlarm:(id)arg1 stoppedUsingSong:(id)arg2;
- (void)handleAlarm:(id)arg1 startedUsingSong:(id)arg2;
- (void)setAlarm:(id)arg1 active:(_Bool)arg2;
- (void)removeAlarm:(id)arg1;
- (void)updateAlarm:(id)arg1 active:(_Bool)arg2;
- (void)addAlarm:(id)arg1 active:(_Bool)arg2;
- (id)nextAlarmForDate:(id)arg1 activeOnly:(_Bool)arg2 allowRepeating:(_Bool)arg3;
- (id)alarmWithIdUrl:(id)arg1;
- (id)alarmWithId:(id)arg1;
- (_Bool)checkIfAlarmsModified;
- (void)saveAlarms;
- (void)unloadAlarms;
- (void)loadAlarms;
- (void)countAlarmsInAggregateDictionary;
- (void)setDefaultSound:(id)arg1 ofType:(long long)arg2;
- (void)loadDefaultSoundAndType;
@property(readonly, nonatomic) long long defaultSoundType;
@property(readonly, nonatomic) NSString *defaultSound;
- (void)dealloc;
- (id)init;

@end

@interface ObjectUpdates : NSObject
{
    NSMutableArray *_addedObjects;
    NSMutableArray *_removedObjects;
}

@property(readonly, nonatomic) NSMutableArray *removedObjects; // @synthesize removedObjects=_removedObjects;
@property(readonly, nonatomic) NSMutableArray *addedObjects; // @synthesize addedObjects=_addedObjects;
- (id)description;
- (void)dealloc;
- (id)init;

@end

@interface ClockManager : NSObject
{
    _Bool _performingUpgrade;
    NSMutableArray *_scheduledLocalNotifications;
    ObjectUpdates *_localNotificationUpdates;
    _Bool runningInSpringBoard;
    _Bool runningInAssistantPlugin;
    _Bool ignoringNotificationPostRequests;
}

+ (id)sharedManager;
+ (int)sectionFromClockAppURL:(id)arg1;
+ (id)urlForClockAppSection:(int)arg1;
+ (void)saveAndNotifyForUserPreferences:(_Bool)arg1 localNotifications:(_Bool)arg2;
+ (void)loadUserPreferences;
@property(nonatomic, getter=isIgnoringNotificationPostRequests) _Bool ignoringNotificationPostRequests; // @synthesize ignoringNotificationPostRequests;
@property(nonatomic, getter=isRunningInAssistantPlugin) _Bool runningInAssistantPlugin; // @synthesize runningInAssistantPlugin;
@property(nonatomic, getter=isRunningInSpringBoard) _Bool runningInSpringBoard; // @synthesize runningInSpringBoard;
@property(readonly, nonatomic) ObjectUpdates *updatesToLocalNotificationsCache;
@property(readonly, nonatomic) NSArray *scheduledLocalNotificationsCache;
- (void)resetUpdatesToLocalNotificationsCache;
- (void)refreshScheduledLocalNotificationsCache;
- (void)cancelLocalNotification:(id)arg1;
- (void)scheduleLocalNotification:(id)arg1;
- (void)postUserPreferencesChangedNotification;
- (_Bool)discardOldVersion;
- (_Bool)upgrade;
- (_Bool)upgradeIfNeverAttempted;
- (void)dealloc;

@end

@interface MTDateFormatting : NSObject
{
    NSString *_amString;
    NSString *_pmString;
    NSDateFormatter *_dateOnlyFormatter;
    NSDateFormatter *_timeOnlyFormatter;
    _Bool _use24HourTime;
    _Bool _timeDesignatorAppearsBeforeTime;
}

+ (id)sharedInstance;
+ (void)load;
@property(readonly, nonatomic) _Bool timeDesignatorAppearsBeforeTime; // @synthesize timeDesignatorAppearsBeforeTime=_timeDesignatorAppearsBeforeTime;
@property(readonly, nonatomic) _Bool use24HourTime; // @synthesize use24HourTime=_use24HourTime;
- (id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2;
- (id)timeDesignatorForDate:(id)arg1;
- (id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id *)arg3;
- (id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id *)arg2;
@property(readonly, nonatomic) NSString *pmString;
@property(readonly, nonatomic) NSString *amString;
- (id)_timeOnlyFormatter;
- (id)_dateOnlyFormatter;
- (void)_reloadLocaleInfo;
- (void)_clearLocaleDependentState;
- (void)dealloc;
- (id)init;

@end

@interface TimerManager : NSObject
{
    int _state;
    UILocalNotification *_notification;
    double _remainingTime;
}

+ (id)copyFetchScheduledNotification;
+ (id)newNotificationAt:(double)arg1 withSound:(id)arg2;
+ (void)setSoundID:(id)arg1 forNotification:(id)arg2;
+ (_Bool)discardOldVersion;
+ (_Bool)upgrade;
+ (_Bool)isTimerNotification:(id)arg1;
+ (id)sharedManager;
- (void)changeSound:(id)arg1;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)cancel;
- (void)scheduleAt:(double)arg1 withSound:(id)arg2;
- (void)reloadState;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double fireTime;
@property(readonly, nonatomic) int state;
- (void)setDefaultSound:(id)arg1;
@property(readonly, nonatomic) NSString *defaultSound;
@property(nonatomic) double defaultDuration;

@end

@interface CollectionCellAnalogClockView : AnalogClockView
{
}

+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotImageForDaytime:(_Bool)arg1;
+ (id)makeClockHand:(int)arg1 daytime:(_Bool)arg2;
+ (id)makeClockFaceForDaytime:(_Bool)arg1;
+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (struct CGPoint)handRotationalCenterForHand:(int)arg1;
+ (_Bool)doesFaceHaveShadow;
+ (double)numeralInset;
+ (double)faceRadius;
+ (id)resourcePath;
+ (int)style;
- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

@interface FullscreenLandscapeAnalogClockView : AnalogClockView
{
}

+ (_Bool)doesFaceHaveShadow;
+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotImageForDaytime:(_Bool)arg1;
+ (id)makeClockHand:(int)arg1 daytime:(_Bool)arg2;
+ (id)makeClockFaceForDaytime:(_Bool)arg1;
+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (struct CGPoint)handRotationalCenterForHand:(int)arg1;
+ (double)faceRadius;
+ (id)resourcePath;
+ (int)style;
- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

@interface Alarm : NSObject
{
    NSString *_id;
    NSURL *_idUrl;
    NSMutableDictionary *_settings;
    UILocalNotification *_notification;
    UILocalNotification *_weeklyNotifications[7];
    UILocalNotification *_snoozedNotification;
    unsigned int _hour;
    unsigned int _minute;
    unsigned int _daySetting;
    NSArray *_repeatDays;
    _Bool _allowsSnooze;
    long long _soundType;
    NSString *_sound;
    NSString *_title;
    NSDate *_lastModified;
    unsigned int _revision;
    id <AlarmDelegate> _delegate;
    Alarm *_editingProxy;
    _Bool _pretendActiveIfProxy;
    long long _snapshotSoundType;
    NSString *_snapshotSound;
}

+ (id)_newSettingsFromNotification:(id)arg1;
+ (_Bool)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (_Bool)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (_Bool)verifySettings:(id)arg1;
+ (_Bool)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)isSnoozeNotification:(id)arg1;
@property(nonatomic) id <AlarmDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, nonatomic) NSString *snapshotSound; // @synthesize snapshotSound=_snapshotSound;
@property(readonly, nonatomic) long long snapshotSoundType; // @synthesize snapshotSoundType=_snapshotSoundType;
@property(readonly, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property(readonly, nonatomic) long long soundType; // @synthesize soundType=_soundType;
@property(nonatomic) _Bool allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property(nonatomic) unsigned int daySetting; // @synthesize daySetting=_daySetting;
@property(nonatomic) unsigned int minute; // @synthesize minute=_minute;
@property(nonatomic) unsigned int hour; // @synthesize hour=_hour;
@property(readonly, nonatomic) Alarm *editingProxy; // @synthesize editingProxy=_editingProxy;
- (id)description;
- (id)debugDescription;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) NSString *rawTitle;
@property(readonly, nonatomic) NSString *uiTitle;
- (void)setSound:(id)arg1 ofType:(long long)arg2;
@property(readonly, nonatomic) NSArray *repeatDays;
@property(readonly, nonatomic) _Bool repeats;
@property(readonly, nonatomic, getter=isSnoozed) _Bool snoozed;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) NSDictionary *settings;
@property(readonly, nonatomic) NSURL *alarmIdUrl;
@property(readonly, nonatomic) NSString *alarmId;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(long long)arg3;
- (id)nextFireDate;
- (long long)compareTime:(id)arg1;
- (void)markModified;
- (void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)handleAlarmFired:(id)arg1;
- (void)refreshActiveState;
- (void)dropNotifications;
- (void)cancelNotifications;
- (void)scheduleNotifications;
- (void)prepareNotifications;
- (id)_newNotification:(long long)arg1;
- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (_Bool)tryAddNotification:(id)arg1;
- (unsigned long long)_notificationsCount;
- (id)timeZoneForOffsetCalculation;
- (id)nowDateForOffsetCalculation;
- (void)dropEditingProxy;
- (void)applyChangesFromEditingProxy;
- (void)prepareEditingProxy;
- (void)applySettings:(id)arg1;
- (void)dealloc;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

@interface WorldClockManager : NSObject
{
    _Bool _dirty;
    NSMutableArray *_cities;
    NSTimer *_weatherUpdateTimer;
    NSDate *lastModified;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified;
@property(readonly, retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
- (void)_notifyNano;
- (id)weatherReachabilityURL;
- (void)updateWeatherDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWeatherDataForCities:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllCities;
- (void)removeCityAtIndex:(unsigned long long)arg1;
- (void)removeCity:(id)arg1;
- (unsigned long long)addCity:(id)arg1;
- (_Bool)canAddCity;
- (id)cityWithIdUrl:(id)arg1;
- (_Bool)checkIfCitiesModified;
- (void)saveCities;
- (void)loadCities;
- (void)dealloc;

@end

@interface WorldClockCellView : UIView <Clock>
{
    NSTimeZone *_timeZone;
    long long _nowInMinutes;
    _Bool _editing;
    _Bool _started;
    id <WorldClockCellViewDelegate> _delegate;
    long long _style;
    AnalogClockView *_analogClock;
    DigitalClockLabel *_digitalClock;
    UILabel *_nameLabel;
    UILabel *_combinedLabel;
}

+ (double)defaultCellHeight;
+ (id)combinedStringFromDate:(id)arg1 withTimezoneOffset:(long long)arg2 dayText:(id *)arg3 hourText:(id *)arg4 usesSeparateLines:(_Bool)arg5;
@property(readonly, nonatomic) _Bool started; // @synthesize started=_started;
@property(readonly, nonatomic) UILabel *combinedLabel; // @synthesize combinedLabel=_combinedLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) DigitalClockLabel *digitalClock; // @synthesize digitalClock=_digitalClock;
@property(readonly, nonatomic) AnalogClockView *analogClock; // @synthesize analogClock=_analogClock;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) id <WorldClockCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (id)stringFromDate:(id)arg1 withTimezoneOffset:(long long)arg2;
- (void)setTimeZone:(id)arg1;
- (void)updateTime;
- (double)coarseUpdateInterval;
- (double)updateInterval;
- (void)updateTimeContinuously:(long long)arg1;
@property(readonly, nonatomic) int runMode;
- (void)localeChange:(id)arg1;
- (void)stop;
- (void)start;
- (void)significantTimeChange:(id)arg1;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface AlarmView : UIView <MTDateLabelObserver>
{
    UIView *_singleStyleDetailContainer;
    long long _style;
    DigitalClockLabel *_timeLabel;
    NSString *_name;
    NSString *_repeatText;
    UILabel *_detailLabel;
    UILabel *_nameLabel;
    UILabel *_repeatLabel;
    UIFont *_nameFont;
    UIFont *_repeatFont;
    UILabel *_secondaryDesignatorLabel;
    UISwitch *_enabledSwitch;
}

@property(readonly, nonatomic) UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
@property(readonly, retain, nonatomic) UILabel *secondaryDesignatorLabel; // @synthesize secondaryDesignatorLabel=_secondaryDesignatorLabel;
@property(retain, nonatomic) UIFont *repeatFont; // @synthesize repeatFont=_repeatFont;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(readonly, retain, nonatomic) UILabel *repeatLabel; // @synthesize repeatLabel=_repeatLabel;
@property(readonly, retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(copy, nonatomic) NSString *repeatText; // @synthesize repeatText=_repeatText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) DigitalClockLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)dateLabel:(id)arg1 timeDesignatorDidChange:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface FullscreenSmallAnalogClockView : AnalogClockView
{
}

+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (double)faceRadius;
+ (int)style;

@end

@interface WorldClockCity : NSObject
{
    ALCity *_alCity;
    City *_weatherCity;
    NSString *_timeZone;
    NSString *_name;
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_unlocalizedName;
    NSString *_unlocalizedCountryName;
}

+ (_Bool)isWorldClockCityProperties:(id)arg1;
@property(retain, nonatomic) City *weatherCity; // @synthesize weatherCity=_weatherCity;
@property(readonly, nonatomic) ALCity *alCity; // @synthesize alCity=_alCity;
@property(readonly, nonatomic) NSURL *idUrl;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSString *unlocalizedCountryName;
@property(readonly, nonatomic) NSString *unlocalizedCityName;
@property(readonly, nonatomic) NSString *countryName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *timeZone;
@property(readonly, nonatomic) NSNumber *alCityId;
@property(readonly, nonatomic) NSDictionary *properties;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;
- (id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6;
- (id)initWithALCityIdentifier:(int)arg1;
- (id)initWithALCity:(id)arg1;

@end

@interface AnalogClockView : UIView <Clock>
{
    int _runMode;
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIImageView *_faceView;
    UIView<HandView> *_dayHands[3];
    UIView<HandView> *_nightHands[3];
    UIImageView *_middleDotDay;
    UIImageView *_middleDotNight;
    UIImageView *_middleRedDot;
    NSDate *_time;
    _Bool _nighttime;
    double _seconds;
    int _flutterIndex;
    _Bool _isRenderStateStale;
    NSCalendar *_calendar;
    _Bool _minuteHourAnimationTriggered;
}

+ (id)imageInBundleForName:(id)arg1;
+ (id)overSecondHandDotImage;
+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotForDayTime:(_Bool)arg1;
+ (id)overHourHandDotImageForDaytime:(_Bool)arg1;
+ (id)makeDotImageSize:(double)arg1 color:(id)arg2;
+ (id)clockHand:(int)arg1 daytime:(_Bool)arg2;
+ (id)makeClockHand:(int)arg1 daytime:(_Bool)arg2;
+ (id)clockFaceForDaytime:(_Bool)arg1;
+ (void)adjustNumberalCenter:(struct CGPoint *)arg1 forNumeralIndex:(long long)arg2;
+ (id)makeClockFaceForDaytime:(_Bool)arg1;
+ (id)imageForType:(int)arg1 dayTime:(_Bool)arg2 generation:(CDUnknownBlockType)arg3;
+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (id)imageCacheNameForType:(int)arg1 daytime:(_Bool)arg2;
+ (struct CGPoint)shadowRotationalCenterForHand:(int)arg1;
+ (struct CGPoint)handRotationalCenterForHand:(int)arg1;
+ (struct ShadowInfo)shadowInfoAtIndex:(unsigned long long)arg1;
+ (struct CGSize)clockSize;
+ (id)overSecondHandDotColor;
+ (id)nightTimeOverHourHandDotColor;
+ (id)dayTimeOverHourHandDotColor;
+ (double)overSecondHandDotSize;
+ (double)overHourHandDotSize;
+ (_Bool)hasOverSecondHandDot;
+ (_Bool)hasOverHourHandDot;
+ (struct UIEdgeInsets)shadowInsets;
+ (_Bool)doesFaceHaveShadow;
+ (id)numeralFont;
+ (double)numeralInset;
+ (id)nightTimeFaceColor;
+ (id)nightTimeTextColor;
+ (id)dayTimeFaceColor;
+ (id)dayTimeTextColor;
+ (id)resourcePath;
+ (int)style;
+ (double)hourHandWidth;
+ (double)minuteHandWidth;
+ (double)secondHandWidth;
+ (double)hourHandLength;
+ (double)minuteHandLength;
+ (double)secondHandLength;
+ (double)faceRadius;
+ (id)analogClockWithStyle:(int)arg1;
+ (struct UIEdgeInsets)insetsForStyle:(int)arg1;
+ (struct CGSize)sizeForStyle:(int)arg1;
+ (void)unregisterSweepingClock:(id)arg1;
+ (void)unregisterTickingClock:(id)arg1;
+ (void)unregisterClock:(id)arg1;
+ (void)registerSweepingClock:(id)arg1;
+ (void)registerTickingClock:(id)arg1;
+ (void)registerClock:(id)arg1;
+ (_Bool)isClockRegistered:(id)arg1;
+ (void)updateTimeForAllSweeping;
+ (void)updateFlutterForAllTicking;
+ (void)updateTimeForAllTicking;
+ (id)cacheVersionHash;
+ (id)cacheVersionedPath;
+ (id)cacheTopLevelPath;
+ (void)initialize;
+ (Class)classForStyle:(int)arg1;
@property(readonly, nonatomic, getter=isNighttime) _Bool nighttime; // @synthesize nighttime=_nighttime;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) UIImageView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) int runMode; // @synthesize runMode=_runMode;
- (void)stop;
- (void)start;
@property(readonly, nonatomic, getter=isStarted) _Bool started;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (void)setTime:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long minute;
@property(readonly, nonatomic) long long hour;
- (void)updateTimeAnimated:(_Bool)arg1;
- (void)updateTime;
- (void)setNighttime:(_Bool)arg1;
- (void)updateFlutter;
- (void)setHandAngle:(double)arg1 forHandIndex:(int)arg2;
- (void)updateTimeContinuously:(long long)arg1;
- (void)setHandTransformForHandIndex:(int)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) int style;
- (void)dealloc;
- (id)init;
- (void)setFrame:(struct CGRect)arg1;
- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

@interface RenderedHandViewFactory : NSObject
{
    NSBundle *_resourcesBundle;
    NSString *_imagePath;
    struct CGPoint _offset;
    struct CGSize _scale;
    struct CGPDFPage *_page;
    struct CGSize _viewSize;
    _Bool _allowCaching;
    NSMutableDictionary *_angleCache;
    unsigned long long _registeredClientsCount;
}

+ (void)flushAllCaches;
+ (void)unregisterForFactory:(id)arg1;
+ (id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(_Bool)arg5;
+ (id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4;
@property(nonatomic) unsigned long long registeredClientsCount; // @synthesize registeredClientsCount=_registeredClientsCount;
@property(readonly, nonatomic) _Bool allowCaching; // @synthesize allowCaching=_allowCaching;
- (void)flushCache;
- (id)imageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;
- (id)renderImageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;
@property(readonly, nonatomic) NSString *key;
- (void)dealloc;
- (id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(_Bool)arg5;

@end

@interface VectorHandView : UIView <HandView>
{
    RenderedHandViewFactory *_factory;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithPDFFile:(id)arg1 offset:(struct CGPoint)arg2 scale:(struct CGSize)arg3 bundle:(id)arg4 allowCaching:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface BitmapHandView : UIView <HandView>
{
    NSArray *_partViews;
    NSArray *_partViewsMaintainingOrientation;
}

+ (id)partInfoWithName:(id)arg1 offset:(struct CGPoint)arg2 maintainsOrientation:(_Bool)arg3;
+ (id)partInfoWithName:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1 rotationalCenter:(struct CGPoint)arg2;
- (id)initWithBundle:(id)arg1 resourcePath:(id)arg2 partInfoList:(id)arg3 rotationalCenter:(struct CGPoint)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface FullscreenPortraitAnalogClockView : FullscreenLandscapeAnalogClockView
{
}

+ (struct CGPoint)handRotationalCenterForHand:(int)arg1;
+ (double)faceRadius;
+ (id)resourcePath;
+ (int)style;

@end

@interface MTDateLabel : UIView
{
    NSTimeZone *_timeZone;
    _Bool _hideTimeDesignator;
    NSDate *_date;
    UILabel *_dateLabel;
    UILabel *_timeDesignatorLabel;
    double _paddingFromTimeToDesignator;
    long long _timeDesignatorBaselineAdjustment;
    id <MTDateLabelObserver> _observer;
}

@property(nonatomic) id <MTDateLabelObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) long long timeDesignatorBaselineAdjustment; // @synthesize timeDesignatorBaselineAdjustment=_timeDesignatorBaselineAdjustment;
@property(nonatomic) double paddingFromTimeToDesignator; // @synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator;
@property(nonatomic) _Bool hideTimeDesignator; // @synthesize hideTimeDesignator=_hideTimeDesignator;
@property(readonly, nonatomic) UILabel *timeDesignatorLabel; // @synthesize timeDesignatorLabel=_timeDesignatorLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)layoutSubviews;
- (id)viewForBaselineLayout;
- (struct CGSize)intrinsicContentSize;
- (void)_noteLayoutChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasTimeDesignator;
@property(retain, nonatomic) UIFont *timeDesignatorFont;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *textColor;
- (void)_updateDateString;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface TimerDialView : UIView
{
    double _currentDuration;
    _Bool _running;
    double _remainingTime;
    double _fireTime;
    double _currentTime;
    struct __CFNumberFormatter *_formatter;
    NSMutableArray *_graduatedSections;
    unsigned long long _graduatedSectionCount;
    double _graduatedSectionWidth;
    NSMutableArray *_graduatedSectionLabels;
    NSMutableArray *_graduatedSectionValues;
    double _tickHorizontalSpacing;
    unsigned long long _minorTicksPerSection;
    double _majorTickHeight;
    double _minorTickHeight;
    UIFont *_labelFont;
}

@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(nonatomic) double minorTickHeight; // @synthesize minorTickHeight=_minorTickHeight;
@property(nonatomic) double majorTickHeight; // @synthesize majorTickHeight=_majorTickHeight;
@property(nonatomic) unsigned long long minorTicksPerSection; // @synthesize minorTicksPerSection=_minorTicksPerSection;
@property(nonatomic) double tickHorizontalSpacing; // @synthesize tickHorizontalSpacing=_tickHorizontalSpacing;
- (void)makeGraduatedSurfaceAtLeastWidth:(double)arg1;
- (id)graduatedSection;
- (double)pointsPerMinute;
- (void)layoutSubviews;
- (void)setupWithDuration:(double)arg1;
- (void)markStaleWithTime:(double)arg1;
- (_Bool)updateDisplayWithTime:(double)arg1;
- (double)updatedDurationForPointOffset:(double)arg1;
- (void)setFireTime:(double)arg1 withTime:(double)arg2;
- (void)setRemainingTime:(double)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface CollectionCellAnalogClockLandscapeView : CollectionCellAnalogClockView
{
}

+ (struct CGPoint)handRotationalCenterForHand:(int)arg1;
+ (id)resourcePath;
+ (double)faceRadius;
+ (int)style;

@end

@interface UIView (MTPixelAlignment)
- (void)mt_setPixelAlignedTransform:(struct CGAffineTransform)arg1;
- (void)mt_setPixelAlignedCenter:(struct CGPoint)arg1;
@end

@interface NSDateFormatter (MTAdditions)
- (id)stringFromDate:(id)arg1 withRelativeToTimeZone:(id)arg2;
@end

