//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
// UUID: D970AC2C-D989-3591-926C-E74B3C4EF96A
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 314.6.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface VVService : NSObject
{
    NSRecursiveLock *_lock;
    unsigned int _capabilities;
    int _mailboxUsage;
    double _trashCompactionAge;
    unsigned int _unreadCount;
    unsigned int _trashedCount;
    NSError *_passwordError;
    NSError *_activationError;
    NSString *_password;
    NSString *_passwordMailboxName;
    struct __CFArray *_retryIntervals;
    PCPersistentTimer *_retryTimer;
    PCPersistentTimer *_trashCompactionTimer;
    PCPersistentTimer *_notificationFallbackTimer;
    struct __CFDate *_notificationFallbackWakeDate;
    struct __CFDate *_nextRetryWakeDate;
    struct __CFDate *_nextTrashCompactionWakeDate;
    int _retryIntervalIndex;
    id _carrierParameters;
    Class _notificationInterpreter;
    struct {
        unsigned int offline:1;
        unsigned int subscribed:1;
        unsigned int initialSetupRequired:1;
        unsigned int fakeInitialSetup:1;
        unsigned int launchedWithFakeInitialSetup:1;
        unsigned int mwiState:1;
        unsigned int notificationFallbackEnabled:1;
        unsigned int capabilitiesLoaded:1;
    } _serviceFlags;
    _Bool _VVMDataConnectionAvailable;
}

+ (void)setInsomniaEnabled:(_Bool)arg1;
+ (void)_resetInsomniaState;
+ (void)_suppressInsomniaState;
+ (void)_setInsomniaState:(_Bool)arg1;
+ (unsigned int)_voicemailPowerAssertion;
+ (_Bool)sharedServiceIsSubscribed;
+ (_Bool)_lockedSharedServiceIsSubscribed;
+ (id)sharedService;
+ (void)_handleSIMChange;
+ (void)initialize;
@property _Bool VVMDataConnectionAvailable; // @synthesize VVMDataConnectionAvailable=_VVMDataConnectionAvailable;
- (void)_attemptScheduledTrashCompaction;
- (void)_cancelAutomatedTrashCompaction;
- (void)cancelAutomatedTrashCompaction;
- (void)_scheduleAutomatedTrashCompaction;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (struct __CFArray *)_retryIntervals;
- (void)_attemptDelayedSynchronize:(id)arg1;
- (void)_attemptDelayedSynchronize;
- (void)resetDelayedSynchronizationAttemptCount;
- (void)cancelDelayedSynchronize;
- (void)_deregisterForPowerEventsIfNecessary;
- (void)_registerForPowerEventsIfNecessary;
- (void)reportError:(id)arg1;
- (void)moveRecordFromTrash:(void *)arg1;
- (void)moveRecordToTrash:(void *)arg1;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned int)arg3;
- (_Bool)greetingAvailable;
- (void)retrieveGreeting;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)clearRemoteUIDsForDetachedMessages;
- (void)retrieveDataForRecord:(void *)arg1;
- (void)synchronize:(_Bool)arg1;
- (_Bool)greetingFetchExistsProgressiveLoadInProgress:(_Bool *)arg1;
- (_Bool)synchronizationPending;
- (_Bool)headerChangesPending;
- (_Bool)dataForRecordPending:(void *)arg1 progressiveLoadInProgress:(_Bool *)arg2;
- (void)progressiveDataLengthsForRecord:(void *)arg1 expected:(unsigned int *)arg2 current:(unsigned int *)arg3;
- (_Bool)taskOfTypeExists:(long long)arg1;
- (_Bool)shouldScheduleAutoTrashOnMailboxUsageChange;
- (_Bool)doesClientManageTrashCompaction;
- (id)carrierParameterValueForKey:(id)arg1;
- (long long)mailboxGreetingType;
- (_Bool)passwordChangeRequiresEnteringOldPassword;
- (int)maximumPasswordLength;
- (int)minimumPasswordLength;
- (int)maximumRecordedNameDuration;
- (int)maximumGreetingDuration;
- (void)cancelPasswordRequest;
- (void)displayPasswordRequestIfNecessary;
- (void)handlePasswordRequestCancellation;
- (id)provisionalPassword;
- (void)setProvisionalPassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)passwordIgnoringSubscription:(_Bool)arg1;
- (id)password;
- (_Bool)isPasswordReady;
- (void)handleIndicatorNotification:(struct __CFDictionary *)arg1;
- (_Bool)respectsMWINotifications;
- (void)handleNotification:(id)arg1 isMWI:(_Bool)arg2;
- (Class)notificationInterpreterClass;
- (void)_cancelIndicatorAction;
- (void)_reactToIndicator;
- (void)setMessageWaiting:(_Bool)arg1;
- (_Bool)isMessageWaiting;
- (_Bool)isInSync;
- (void)_scheduleFallbackTimerIfNecessary;
- (void)_enterFallbackMode:(id)arg1;
- (void)_deliverFallbackNotification;
- (void)cancelNotificationFallback;
- (void)clearActivationError;
- (id)activationError;
- (void)_contextActivationSucceeded:(id)arg1;
- (void)_contextActivationFailed:(id)arg1;
- (void)_setActivationError:(id)arg1;
- (void)_handleCallStatusChange:(struct __CFDictionary *)arg1;
- (void)handleDataContextDeactivated;
- (void)_updateOnlineStatusWithDataStatusDict:(struct __CFDictionary *)arg1;
- (_Bool)isOfflineDueToRoaming;
- (_Bool)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary *)arg1;
- (struct __CFString *)connectionServiceType;
- (void)setOnline:(_Bool)arg1;
- (void)_setOnline:(_Bool)arg1 fallbackMode:(_Bool)arg2;
- (_Bool)isOnline;
- (void)updateLoggingSettings;
- (void)removeAllNonDetachedRecords;
- (void)removeAllRecords;
- (void)resetCounts;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;
- (void)setTrashedCount:(unsigned int)arg1;
- (unsigned int)trashedCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (unsigned int)unreadCount;
- (void)setMailboxUsage:(int)arg1;
- (int)mailboxUsage;
- (_Bool)sharedSubscriptionRequiresSetup;
- (void)setMailboxRequiresSetup:(_Bool)arg1;
- (_Bool)mailboxRequiresSetup;
- (id)mailboxName;
- (void)kill;
- (void)setSubscribed:(_Bool)arg1;
- (_Bool)isVVMAvailableOverWiFi;
- (_Bool)isSubscribed;
- (unsigned int)capabilities;
- (void)dealloc;
- (id)init;
- (_Bool)doTrashCompaction;
- (_Bool)shouldTrashCompactRecord:(void *)arg1;
- (double)trashCompactionAge;

@end

@interface VVCarrierParameters : NSObject
{
    NSDictionary *_parameterValues;
}

+ (_Bool)supportsPasswordChanges;
+ (_Bool)supportsGreetingChanges;
+ (id)messageNotificationFallbackTimeout;
+ (id)retryIntervals;
+ (_Bool)supportsDetachedStorage;
+ (_Bool)ignoresRoamingSwitch;
+ (id)carrierServiceName;
- (id)parameterValueForKey:(id)arg1;
- (void)dealloc;
- (id)initForServiceBundleId:(id)arg1;
- (id)initForService:(id)arg1;
- (void)_initForBundle:(id)arg1;

@end

@interface VVNotificationInterpreter : NSObject
{
}

+ (id)interpretedDictionaryForNotificationUserInfo:(struct __CFDictionary *)arg1;

@end

@interface VVVerifier : NSObject
{
    NSMutableDictionary *_checkpointDictionary;
    NSArray *_keyDescriptions;
}

+ (id)sharedVerifier;
- (id)humanReadableConfigurationDictionary:(id *)arg1;
- (void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4;
- (id)configurationDictionary;
- (id)readableError;
- (id)keyDescriptions;
- (_Bool)valueForCheckpointKey:(id)arg1 exists:(_Bool *)arg2;
- (void)storeValue:(_Bool)arg1 forCheckpointKey:(id)arg2;
- (void)_saveCheckpointDictionary;
- (void)_checkpointDictionaryChanged;
- (id)_checkpointDictionary;
- (id)_checkpointDictionaryFilePath;
- (void)dealloc;

@end

@interface VMServiceClient : NSObject
{
    VMAccount *_legacyVisualVoicemailAccount;
    NSObject<OS_dispatch_queue> *_queue;
    long long _behaviorFlags;
}

+ (id)sharedClient;
+ (void)initialize;
@property long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
- (void)_handleApplicationResumed:(id)arg1;
- (void)_handleApplicationSuspended:(id)arg1;
- (void)_handleXPCConnectionEstablished:(id)arg1;
- (void)_handleXPCDisconnectNotification:(id)arg1;
- (void)_handleInboundXPCMessageRecievedNotification:(id)arg1;
- (id)proxyObjectFromProxyDictionary:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (_Bool)sharedServiceIsSubscribed;
- (id)sharedAccount;
- (void)dealloc;
- (id)init;

@end

@interface VMAccount : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableArray *_voicemailSummaries[256];
}

- (void)handleStoreChanged:(id)arg1;
- (void)handleSignificantChange:(id)arg1;
- (void)handleVoicemailFlagsChanged:(id)arg1;
- (_Bool)willBroadcastNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_updateCache;
- (void)_updateCacheDoWork;
- (void)_updateVoicemailFlagsIndexFromCache;
- (id)_bucketSummary;
- (id)greetingPath;
- (long long)identifierOfLastInsert;
- (id)voicemailWithIdentifier:(long long)arg1;
- (unsigned int)countOfVoicemailsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (unsigned int)_lockedCountOfVoicemailsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (id)allVoicemailsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2 sinceIdentifier:(long long)arg3;
- (id)_voicemailSummariesBucketsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (id)allVoicemailsWithFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (void)updateLoggingSettings;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (void)handlePasswordRequestCancellation;
- (void)displayPasswordRequestIfNecessary;
- (void)moveVoicemailFromTrash:(id)arg1;
- (void)moveVoicemailToTrash:(id)arg1;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned int)arg3;
- (_Bool)greetingAvailable;
- (void)retrieveGreeting;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)retrieveDataForVoicemail:(id)arg1;
- (void)synchronize:(_Bool)arg1;
- (_Bool)greetingFetchExistsProgressiveLoadInProgress:(_Bool *)arg1;
- (_Bool)dataForVoicemailPending:(id)arg1 progressiveLoadInProgress:(_Bool *)arg2;
- (_Bool)synchronizationPending;
- (_Bool)headerChangesPending;
- (void)progressiveDataLengthsForVoicemail:(id)arg1 expected:(unsigned int *)arg2 current:(unsigned int *)arg3;
- (_Bool)taskOfTypeExists:(long long)arg1;
- (long long)mailboxGreetingType;
- (_Bool)passwordChangeRequiresEnteringOldPassword;
- (int)maximumPasswordLength;
- (int)minimumPasswordLength;
- (int)maximumGreetingDuration;
- (id)provisionalPassword;
- (void)setProvisionalPassword:(id)arg1;
- (_Bool)isMessageWaiting;
- (unsigned int)trashedCount;
- (unsigned int)unreadCount;
- (int)mailboxUsage;
- (_Bool)mailboxRequiresSetup;
- (void)clearActivationError;
- (_Bool)isOfflineDueToRoaming;
- (_Bool)isOnline;
- (_Bool)isSubscribed;
- (unsigned int)capabilities;
- (void)dealloc;
- (void)_forceUpdateCache;
@property(readonly) NSString *identifier;
- (id)voicemailWithIdentifier:(long long)arg1 creating:(_Bool)arg2;
- (id)initForLegacyVisualVoicemail;

@end

@interface VMVoicemail : NSObject
{
    VMAccount *_account;
    long long _identifier;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    struct __CFPhoneNumber *_senderPhoneNumber;
    struct __CFPhoneNumber *_callbackPhoneNumber;
    id _cachedAddressBookRef;
    NSString *_cachedDisplayName;
}

+ (void)initialize;
+ (void)forceReloadAllLiveVoicemailsForAccount:(id)arg1;
+ (id)voicemailWithAccount:(id)arg1 identifier:(long long)arg2 creating:(_Bool)arg3;
+ (void)_doVoicemailMapHousekeepingNoLock;
+ (void)_scheduleVoicemailMapHousekeepingNoLock;
+ (void)scheduleVoicemailMapHousekeeping;
+ (id)_findPreviouslyCreatedVoicemailWithAccountNoLock:(id)arg1 identifier:(long long)arg2;
@property(retain, nonatomic) NSString *cachedDisplayName; // @synthesize cachedDisplayName=_cachedDisplayName;
@property(retain, nonatomic) id cachedAddressBookRef; // @synthesize cachedAddressBookRef=_cachedAddressBookRef;
- (id)imageDataUsingAddressBook:(void *)arg1;
- (id)displayLabelUsingAddressBook:(void *)arg1;
- (id)displayNameUsingAddressBook:(void *)arg1;
- (void *)abRecordUsingAddressBook:(void *)arg1 withIdentifier:(int *)arg2;
- (void *)abRecordUsingAddressBook:(void *)arg1;
- (void)_handleDataAvailable:(id)arg1;
- (_Bool)willBroadcastNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)description;
- (void)setFlags:(unsigned int)arg1;
- (_Bool)doesNotHaveFlags:(unsigned int)arg1;
- (_Bool)hasFlags:(unsigned int)arg1;
- (unsigned int)flags;
- (id)dataPath;
- (int)duration;
- (id)callbackNumber;
@property(readonly) struct __CFPhoneNumber *callbackPhoneNumber; // @dynamic callbackPhoneNumber;
@property(readonly) struct __CFPhoneNumber *senderPhoneNumber; // @dynamic senderPhoneNumber;
- (id)sender;
- (id)date;
- (unsigned long long)remoteUID;
- (long long)identifier;
- (void)_updateCache;
- (void)dealloc;
- (void)_forceUpdateCache;
- (void)_lockedPreemptivelySetFlags:(unsigned int)arg1 clearFlags:(unsigned int)arg2 unlockedBlock:(CDUnknownBlockType *)arg3;
- (void)_preemptivelySetFlags:(unsigned int)arg1 clearFlags:(unsigned int)arg2;
- (id)initWithAccount:(id)arg1 identifier:(long long)arg2;

@end

@interface VMXPCMessageResult : NSObject
{
    _Bool _wasSuccessful;
    NSDictionary *_message;
}

+ (id)result;
+ (id)resultWithWasSuccessful:(_Bool)arg1 message:(id)arg2;
@property _Bool wasSuccessful; // @synthesize wasSuccessful=_wasSuccessful;
@property(retain) NSDictionary *message; // @synthesize message=_message;
- (void)dealloc;
- (id)initWithWasSuccessful:(_Bool)arg1 message:(id)arg2;

@end

@interface NSError (VVError)
+ (id)errorWithStreamDomain:(long long)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
- (_Bool)shouldPresentErrorForTaskType:(long long)arg1;
- (_Bool)isSecurityError;
- (_Bool)isServerError;
- (_Bool)isConnectivityError;
- (_Bool)isInvalidSubscriberError;
- (_Bool)isNewPasswordError;
- (_Bool)isExpiredPasswordError;
- (_Bool)isPasswordMismatchError;
- (_Bool)isStreamDomain:(long long)arg1 error:(int)arg2;
- (_Bool)isEqualToError:(id)arg1;
@end

@interface NSMutableDictionary (VM)
+ (id)vmDictionaryWithObjectsAndKeys:(id)arg1;
+ (_Bool)_processArgumentWithMutableDictionary:(id)arg1 object:(id)arg2 key:(id)arg3;
- (void)vmSetObject:(id)arg1 forKey:(id)arg2;
@end
