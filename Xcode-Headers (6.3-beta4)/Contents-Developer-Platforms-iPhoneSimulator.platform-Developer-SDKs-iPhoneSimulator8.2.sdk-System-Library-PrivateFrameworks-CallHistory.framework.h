//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct LogServer;

struct LoggerBase<std::__1::shared_ptr<ctu::LogServer>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    unsigned char _field2;
    unsigned char _field3;
    struct shared_ptr<ctu::LogServer> _field4;
};

struct StaticLogger {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> fLogDomain;
    unsigned char fLogLevel;
    unsigned char fParentLevel;
    struct shared_ptr<ctu::LogServer> fServer;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __first_;
    } __r_;
};

struct shared_ptr<ctu::LogServer> {
    struct LogServer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct LoggerBase<std::__1::shared_ptr<ctu::LogServer>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    unsigned char _field2;
    unsigned char _field3;
    struct shared_ptr<ctu::LogServer> _field4;
} LoggerBase_f7398810;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
// UUID: 8B29A2DE-254A-3142-84E6-6734F9681802
//
//                           Arch: x86_64
//                Current version: 2.0.0
//          Compatibility version: 1.0.0
//                 Source version: 308.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol CHLoggerProtocol
- (void)logWithLevel:(unsigned int)arg1 withFormat:(NSString *)arg2;
- (_Bool)shouldLogForLevel:(unsigned int)arg1;
@end

@protocol CHPhoneBookManagerProtocol <NSObject>
- (void)releaseCachedRecord;
- (_Bool)isABContactASuggestion;
- (void)setABRecordMultiValueId:(NSString *)arg1;
- (void)setABRecordId:(NSString *)arg1;
- (void)setABRecordRef:(const void *)arg1;
- (const void *)getABRecordRef;
- (NSString *)getLocalizedCallerIdLabelForRecordId:(NSString *)arg1;
- (NSString *)getPersonsNameForRecordId:(NSString *)arg1;
- (NSString *)getCallerIdPropertyMultiValueId:(NSString *)arg1 andISOCountryCode:(NSString *)arg2 isEmail:(_Bool)arg3;
- (NSString *)getRecordId:(NSString *)arg1 andISOCountryCode:(NSString *)arg2 isEmail:(_Bool)arg3;
@end

@protocol CHSynchronizableProtocol
- (NSObject<OS_dispatch_queue> *)queue;
- (_Bool)executeSyncWithBOOL:(_Bool (^)(void))arg1;
- (id)executeSyncWithResult:(id (^)(void))arg1;
- (void)executeSync:(void (^)(void))arg1;
- (void)execute:(void (^)(void))arg1;
@end

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

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@protocol SyncManagerProtocol <NSObject>
- (void)resetTimers;
- (double)timerLifetime;
- (double)timerOutgoing;
- (double)timerIncoming;
- (void)updateAllObjects:(NSDictionary *)arg1;
- (void)updateObjects:(NSDictionary *)arg1;
- (void)deleteObjectsWithLimits:(NSDictionary *)arg1;
- (void)deleteAllObjects;
- (void)deleteObjectsWithUniqueIds:(NSArray *)arg1;
- (void)deleteObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchObjectsWithLimits:(NSDictionary *)arg1;
- (CHRecentCall *)fetchObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchAllObjects;
- (void)insertRecordsWithoutTransactions:(NSArray *)arg1;
- (void)insertWithoutTransaction:(CHRecentCall *)arg1;
- (void)insert:(CHRecentCall *)arg1;
@end

@protocol SyncProtocol <NSObject>
- (void)hello:(NSString *)arg1;
- (void)bootUp:(void (^)(_Bool))arg1;
- (void)migrateCallDB:(NSArray *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)clearSyncToken:(void (^)(NSString *))arg1;
- (void)sync:(void (^)(NSString *))arg1;
- (void)appendTransactions:(NSArray *)arg1;
@end

@interface CallFingerprint : NSObject
{
}

+ (id)getDatabasePredicate:(id)arg1;
+ (_Bool)match:(id)arg1:(id)arg2;

@end

@interface CHSynchronizable : NSObject <CHSynchronizableProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)executeSyncWithBOOL:(CDUnknownBlockType)arg1;
- (id)executeSyncWithResult:(CDUnknownBlockType)arg1;
- (void)executeSync:(CDUnknownBlockType)arg1;
- (void)execute:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithName:(id)arg1;

@end

@interface AWDLogger : CHLogger
{
    AWDServerConnection *_awdServer;
}

+ (id)instance;
@property(retain, nonatomic) AWDServerConnection *awdServer; // @synthesize awdServer=_awdServer;
- (void).cxx_destruct;
- (void)syncFailure:(unsigned int)arg1;
- (void)syncSuccess:(unsigned long long)arg1 withDownloadRecordCount:(unsigned long long)arg2;
- (void)entitlementRejection:(int)arg1;
- (void)callAddedWithNilUuid:(unsigned long long)arg1 withCallStatus:(unsigned long long)arg2;
- (void)deleteAll:(unsigned long long)arg1;
- (void)databaseSaveError:(long long)arg1 withTableName:(id)arg2;
- (void)databaseMigrationResult:(_Bool)arg1;
- (void)commCenterMigrationResult:(_Bool)arg1 withMigratedCallCount:(unsigned long long)arg2;
- (void)submitMetric:(id)arg1 withId:(unsigned int)arg2;
- (id)init;

@end

@interface CallRecord : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) NSNumber *answered; // @dynamic answered;
@property(retain, nonatomic) NSNumber *calltype; // @dynamic calltype;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *device_id; // @dynamic device_id;
@property(retain, nonatomic) NSNumber *disconnected_cause; // @dynamic disconnected_cause;
@property(retain, nonatomic) NSNumber *duration; // @dynamic duration;
@property(retain, nonatomic) NSNumber *face_time_data; // @dynamic face_time_data;
@property(retain, nonatomic) NSString *iso_country_code; // @dynamic iso_country_code;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *number_availability; // @dynamic number_availability;
@property(retain, nonatomic) NSNumber *originated; // @dynamic originated;
@property(retain, nonatomic) NSNumber *read; // @dynamic read;
@property(retain, nonatomic) NSString *unique_id; // @dynamic unique_id;
@end

@interface NotificationSender : NSObject
{
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

@interface DBHandleManager : CHSynchronizable
{
    CallHistoryDBClientHandle *_dbHandle;
    id _syncHelperReadyNotificationRef;
    NSXPCConnection *_connection;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)reset_sync;
- (id)dbHandle;
- (void)createDBHandleIfNeeded_sync;
- (void)createDBHandleIfNeeded;
- (void)createDBHandle_sync;
- (void)createDBHandle;
- (void)pokeSyncHelperToInitDB_sync;
- (void)registerForNotifications_sync;
- (void)resetConnection;
- (void)createXPCConnection_sync;
- (void)init_sync;
- (id)init;

@end

@interface CHPhoneNumber : CHLogger
{
    _Bool _formatted;
    NSString *_originalPhoneNumber;
    NSString *_ISOCountryCode;
    NSString *_formattedPhoneNumber;
}

@property(copy) NSString *formattedPhoneNumber; // @synthesize formattedPhoneNumber=_formattedPhoneNumber;
@property _Bool formatted; // @synthesize formatted=_formatted;
@property(copy) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_ISOCountryCode;
@property(copy) NSString *originalPhoneNumber; // @synthesize originalPhoneNumber=_originalPhoneNumber;
- (void).cxx_destruct;
- (id)formattedNumber;
- (id)initWithPhoneNumber:(id)arg1 andISOCountryCode:(id)arg2;

@end

@interface CHManager : CHSynchronizedLoggable
{
    _Bool _showsFaceTimeCalls;
    _Bool _showsFaceTimeVideoCalls;
    _Bool _showsFaceTimeAudioCalls;
    _Bool _showsTelephonyCalls;
    _Bool _generateSyncTransactions;
    _Bool _cacheIsDirty;
    _Bool _reCoalesce;
    unsigned int _limitingCallTypes;
    NSArray *_recentCalls;
    NSDate *_limitingStartDate;
    NSDate *_limitingEndDate;
    NSPredicate *_postFetchingPredicate;
    NSString *_coalescingStrategy;
    long long _numberOfUnseenMissedCalls;
    id <SyncManagerProtocol> _syncManager;
    NSArray *_uncoalescedRecentCalls;
    NSArray *_uncoalescedUnFilteredRecentCalls;
    long long _unreadCallCount;
    id _databaseChangedNotificationRef;
    id _addressBookChangedNotificationRef;
}

+ (unsigned int)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(_Bool)arg2 isAnswered:(_Bool)arg3;
@property(retain) id addressBookChangedNotificationRef; // @synthesize addressBookChangedNotificationRef=_addressBookChangedNotificationRef;
@property(retain) id databaseChangedNotificationRef; // @synthesize databaseChangedNotificationRef=_databaseChangedNotificationRef;
@property long long unreadCallCount; // @synthesize unreadCallCount=_unreadCallCount;
@property(retain) NSArray *uncoalescedUnFilteredRecentCalls; // @synthesize uncoalescedUnFilteredRecentCalls=_uncoalescedUnFilteredRecentCalls;
@property(retain, nonatomic, getter=uncoalescedRecentCallsSync) NSArray *uncoalescedRecentCalls; // @synthesize uncoalescedRecentCalls=_uncoalescedRecentCalls;
@property _Bool reCoalesce; // @synthesize reCoalesce=_reCoalesce;
@property _Bool cacheIsDirty; // @synthesize cacheIsDirty=_cacheIsDirty;
@property(retain) id <SyncManagerProtocol> syncManager; // @synthesize syncManager=_syncManager;
@property long long numberOfUnseenMissedCalls; // @synthesize numberOfUnseenMissedCalls=_numberOfUnseenMissedCalls;
@property(copy, nonatomic) NSString *coalescingStrategy; // @synthesize coalescingStrategy=_coalescingStrategy;
@property(copy, nonatomic) NSPredicate *postFetchingPredicate; // @synthesize postFetchingPredicate=_postFetchingPredicate;
@property(copy, nonatomic) NSDate *limitingEndDate; // @synthesize limitingEndDate=_limitingEndDate;
@property(copy, nonatomic) NSDate *limitingStartDate; // @synthesize limitingStartDate=_limitingStartDate;
@property(nonatomic) unsigned int limitingCallTypes; // @synthesize limitingCallTypes=_limitingCallTypes;
@property _Bool generateSyncTransactions; // @synthesize generateSyncTransactions=_generateSyncTransactions;
@property(nonatomic) _Bool showsTelephonyCalls; // @synthesize showsTelephonyCalls=_showsTelephonyCalls;
@property(nonatomic) _Bool showsFaceTimeAudioCalls; // @synthesize showsFaceTimeAudioCalls=_showsFaceTimeAudioCalls;
@property(nonatomic) _Bool showsFaceTimeVideoCalls; // @synthesize showsFaceTimeVideoCalls=_showsFaceTimeVideoCalls;
@property(nonatomic) _Bool showsFaceTimeCalls; // @synthesize showsFaceTimeCalls=_showsFaceTimeCalls;
@property(retain, nonatomic) NSArray *recentCalls; // @synthesize recentCalls=_recentCalls;
- (void).cxx_destruct;
- (void)addMultipleCallsToCallHistory:(id)arg1;
- (void)flush;
- (void)callTimersReset;
- (double)callTimersGetLifetime;
- (double)callTimersGetOutgoing;
- (double)callTimersGetIncoming;
- (void)setLimitingCallTypesSync:(unsigned int)arg1;
- (void)deleteAllCalls;
- (void)deleteAllCallsSync;
- (void)deleteCallAtIndex:(unsigned long long)arg1;
- (void)deleteCallsWithPredicate:(id)arg1;
- (void)deleteCall:(id)arg1;
- (void)deleteTheseCalls:(id)arg1;
- (void)deleteTheseCallsSync:(id)arg1;
- (void)updateBytesOfDataUsedFor:(id)arg1 with:(id)arg2;
- (void)markAllCallsAsReadWithPredicate:(id)arg1;
- (void)addToCallHistory:(id)arg1;
- (unsigned long long)fetchUnreadCallsCount;
- (unsigned long long)countCallsWithPredicate:(id)arg1;
- (unsigned long long)countCallsWithPredicateSync:(id)arg1;
- (id)fetchRecentCallsSyncWithCoalescing:(_Bool)arg1;
- (id)recentCallsWithPredicate:(id)arg1;
- (id)applyPredicate:(id)arg1 toCalls:(id)arg2;
- (id)unCoalesceCall:(id)arg1;
- (id)coalesceCalls:(id)arg1;
- (void)databaseChanged:(id)arg1;
- (void)addressBookChanged:(id)arg1;
- (void)unRegisterForNotifications;
- (void)registerForNotifications;
- (void)dealloc;
- (id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4;
- (id)init;

@end

@interface CallDBManager : CHLogger
{
    DBManager *fDBManager;
}

+ (_Bool)bootUp;
+ (id)create;
+ (id)_create:(_Bool)arg1;
+ (long long)isBootUpRequired;
+ (id)dataStoreName;
+ (id)modelURL;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (id)initWithDBManager:(id)arg1;

@end

@interface SyncManager : CHLogger <SyncManagerProtocol>
{
    TransactionManager *_transactionManager;
    DBHandleManager *_handleManager;
}

@property(readonly, nonatomic) DBHandleManager *handleManager; // @synthesize handleManager=_handleManager;
- (void).cxx_destruct;
- (id)archiveCallObject:(id)arg1;
- (void)resetTimers;
- (double)timerOutgoing;
- (double)timerIncoming;
- (double)timerLifetime;
- (void)addUpdateTransactions:(id)arg1;
- (void)updateAllObjects:(id)arg1;
- (void)updateObjects:(id)arg1;
- (void)deleteObjectsWithLimits:(id)arg1;
- (void)deleteAllObjects;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithLimits:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAllObjects;
- (void)insertRecordsWithoutTransactions:(id)arg1;
- (void)insertWithoutTransaction:(id)arg1;
- (void)insert:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface CHMigrationPolicy : NSEntityMigrationPolicy
{
    NSMutableDictionary *mccToISOCountryCodeMap;
    NSString *lastQueriedISOCountryCode;
    NSString *currentLocale;
}

- (void).cxx_destruct;
- (id)isoCountryCodeIfAbsent:(id)arg1;
- (id)isoCountryCodeForMCC:(id)arg1;
- (id)init;

@end

@interface CallHistoryDBHandle : CHLogger
{
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    CallDBProperties *fCallDBProperties;
    CallDBManager *callDBManager;
    NSString *objectId;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
}

+ (id)create;
+ (id)createWithDBManager:(id)arg1;
@property(readonly, nonatomic) CallDBManager *callDBManager; // @synthesize callDBManager;
@property(readonly, nonatomic) NSString *objectId; // @synthesize objectId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetTimers;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (id)timerIncoming;
- (_Bool)save:(id *)arg1;
- (void)handleCallRecordMergeConflicts:(id)arg1;
- (void)updateCallDBProperties;
- (void)deleteAll;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (id)createCallRecord;
- (id)fetchAllNoLimit;
- (id)fetchAll;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(_Bool)arg3;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)postTimersChangedNotification;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (void)unRegisterForNotifications;
- (void)registerForNotifications:(id)arg1;
- (id)callRecordContext;
- (void)setCallDBProperties;
- (id)initWithDBManager:(id)arg1;

@end

@interface CHLogger : NSObject <CHLoggerProtocol>
{
    struct StaticLogger _logger;
}

+ (void)logWithLevel:(unsigned char)arg1 logger:(LoggerBase_f7398810 *)arg2 format:(id)arg3 argList:(struct __va_list_tag [1])arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)logWithLevel:(unsigned int)arg1 withFormat:(id)arg2 withArgs:(struct __va_list_tag [1])arg3;
- (void)logWithLevel:(unsigned int)arg1 withFormat:(id)arg2;
- (_Bool)shouldLogForLevel:(unsigned int)arg1;
- (id)initWithDomain:(id)arg1;

@end

@interface Transaction : NSObject <NSSecureCoding>
{
    unsigned long long _transactionType;
    NSData *_record;
}

+ (_Bool)supportsSecureCoding;
+ (id)toString:(unsigned long long)arg1;
@property(retain) NSData *record; // @synthesize record=_record;
@property unsigned long long transactionType; // @synthesize transactionType=_transactionType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 andRecord:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2;

@end

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable
{
    CallHistoryDBHandle *dbStoreHandle;
    id _observerCallRecordRef;
    id _observerCallTimersRef;
}

@property(readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle; // @synthesize dbStoreHandle;
- (void).cxx_destruct;
- (_Bool)saveDatabase:(id *)arg1;
- (void)dealloc;
- (_Bool)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2;
- (id)updateAllCallRecords_sync:(id)arg1 error:(id *)arg2;
- (id)updateCallRecords_sync:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (_Bool)willHandleNotification_sync:(id)arg1;
- (void)handleCallTimersSave_sync:(id)arg1;
- (void)handleCallRecordSave_sync:(id)arg1;
- (void)resetTimers;
- (id)timerLifetime;
- (id)timerLastReset;
- (id)timerOutgoing;
- (id)timerIncoming;
- (id)updateAllCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateAllCallRecords:(id)arg1;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateCallRecords:(id)arg1;
- (_Bool)createCallRecords:(id)arg1 error:(id *)arg2;
- (_Bool)createCallRecords:(id)arg1;
- (_Bool)createCallRecord:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (_Bool)createCallRecord:(id)arg1 error:(id *)arg2;
- (_Bool)createCallRecord:(id)arg1;
- (_Bool)deleteObjectsWithUniqueIds:(id)arg1 error:(id *)arg2;
- (_Bool)deleteObjectsWithUniqueIds:(id)arg1;
- (_Bool)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (_Bool)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2;
- (_Bool)deleteObjectWithUniqueId:(id)arg1;
- (_Bool)deleteAll:(id *)arg1;
- (_Bool)deleteAll;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchAllNoLimit;
- (id)fetchAll;
- (void)unRegisterForNotifications;
- (void)registerForNotifications;
- (id)init;
- (id)convertToCHRecentCalls_sync:(id)arg1;
- (void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2;
- (void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2;
- (unsigned int)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3;
- (void)parseCallStatus_sync:(unsigned int)arg1 isAnswered:(_Bool *)arg2 isOriginated:(_Bool *)arg3;

@end

@interface CHSynchronizedLoggable : NSObject <CHLoggerProtocol, CHSynchronizableProtocol>
{
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}

- (void).cxx_destruct;
- (_Bool)executeSyncWithBOOL:(CDUnknownBlockType)arg1;
- (id)executeSyncWithResult:(CDUnknownBlockType)arg1;
- (void)executeSync:(CDUnknownBlockType)arg1;
- (void)execute:(CDUnknownBlockType)arg1;
- (id)queue;
- (void)logWithLevel:(unsigned int)arg1 withFormat:(id)arg2;
- (_Bool)shouldLogForLevel:(unsigned int)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (id)initWithName:(id)arg1;

@end

@interface CHRecentCall : CHSynchronizedLoggable <NSSecureCoding, NSCopying>
{
    _Bool _read;
    _Bool _callerIdIsBlocked;
    _Bool _multiCall;
    _Bool _callerIdIsFormatted;
    _Bool _answered;
    _Bool _mobileOriginated;
    unsigned int _callerIdAvailability;
    unsigned int _callType;
    unsigned int _callStatus;
    NSString *_callerNetworkName;
    NSString *_uniqueId;
    NSString *_devicePhoneId;
    NSString *_callerId;
    NSDate *_date;
    double _duration;
    NSNumber *_bytesOfDataUsed;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSNumber *_disconnectedCause;
    NSString *_callerNetworkFirstName;
    NSString *_callerNetworkSecondName;
    NSString *_callerIdLabel;
    NSString *_callerIdLocation;
    unsigned long long _unreadCount;
    NSMutableArray *_callOccurrences;
    NSString *_addressBookRecordId;
    NSString *_addressBookCallerIDMultiValueId;
    NSString *_callerName;
    id <CHPhoneBookManagerProtocol> _phoneBookManager;
}

+ (_Bool)supportsSecureCoding;
+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
@property _Bool mobileOriginated; // @synthesize mobileOriginated=_mobileOriginated;
@property _Bool answered; // @synthesize answered=_answered;
@property(retain) id <CHPhoneBookManagerProtocol> phoneBookManager; // @synthesize phoneBookManager=_phoneBookManager;
@property _Bool callerIdIsFormatted; // @synthesize callerIdIsFormatted=_callerIdIsFormatted;
@property _Bool multiCall; // @synthesize multiCall=_multiCall;
@property(copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(copy, nonatomic) NSString *addressBookCallerIDMultiValueId; // @synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId;
@property(copy, nonatomic) NSString *addressBookRecordId; // @synthesize addressBookRecordId=_addressBookRecordId;
@property(retain, nonatomic) NSMutableArray *callOccurrences; // @synthesize callOccurrences=_callOccurrences;
@property unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy, nonatomic) NSString *callerIdLocation; // @synthesize callerIdLocation=_callerIdLocation;
@property(copy, nonatomic) NSString *callerIdLabel; // @synthesize callerIdLabel=_callerIdLabel;
@property(copy) NSString *callerNetworkSecondName; // @synthesize callerNetworkSecondName=_callerNetworkSecondName;
@property(copy) NSString *callerNetworkFirstName; // @synthesize callerNetworkFirstName=_callerNetworkFirstName;
@property _Bool callerIdIsBlocked; // @synthesize callerIdIsBlocked=_callerIdIsBlocked;
@property(copy, nonatomic) NSNumber *disconnectedCause; // @synthesize disconnectedCause=_disconnectedCause;
@property(copy) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(copy) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(copy) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(copy, nonatomic) NSNumber *bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property double duration; // @synthesize duration=_duration;
@property(copy) NSDate *date; // @synthesize date=_date;
@property unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property unsigned int callType; // @synthesize callType=_callType;
@property(copy) NSString *callerId; // @synthesize callerId=_callerId;
@property(copy) NSString *devicePhoneId; // @synthesize devicePhoneId=_devicePhoneId;
@property(copy) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)callOccurrencesAsStringSync;
- (id)description;
- (_Bool)isAddressBookContactASuggestion;
- (_Bool)isAddressBookContactASuggestionSync;
- (_Bool)representsCallAtDate:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)callerIdSubStringForDisplay;
- (id)callerIdLocationSync;
- (id)callerIdLabelSync;
- (id)callerIdForDisplay;
- (id)callerIdForDisplaySync;
- (id)callerNameForDisplay;
- (id)callerNameForDisplaySync;
- (id)getLocalizedStringSync:(id)arg1;
- (id)callerNameSync;
@property(copy, nonatomic) NSString *callerNetworkName; // @synthesize callerNetworkName=_callerNetworkName;
@property(nonatomic) unsigned int callerIdAvailability; // @synthesize callerIdAvailability=_callerIdAvailability;
- (_Bool)callerIdIsEmailAddress;
- (_Bool)callerIdIsEmailAddressSync;
- (id)addressBookCallerIDMultiValueIdSync;
- (id)addressBookRecordIdSync;
- (void)fetchAndSetAddressBookIdsSync;
@property(nonatomic) _Bool read; // @synthesize read=_read;
- (void)createOccurrenceArraySync;
- (id)callOccurrencesSync;
- (unsigned long long)numberOfOccurrences;
- (unsigned long long)numberOfOccurrencesSync;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (_Bool)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (_Bool)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)coalescingHash;
- (_Bool)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (_Bool)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (_Bool)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (void)addressBookChanged;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

@interface CHSharedAddressBook : CHSynchronizedLoggable
{
    void *_addressBook;
    NSMutableDictionary *_addressBookCache;
}

+ (id)get;
@property(retain) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
@property void *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (id)description;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (void)performQuery_sync:(CDUnknownBlockType)arg1;
- (void)revertAddressBook:(_Bool)arg1;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;
- (void)createAddressBook;
- (void)dealloc;
- (id)init;

@end

@interface CHMigrator : NSObject
{
    CallDBMigrator *_migrator;
}

- (void).cxx_destruct;
- (void)migrate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end

@interface CallDBMigrator : NSObject
{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (void).cxx_destruct;
- (void)migrate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end

@interface CHPhoneBookIOSManager : CHLogger <CHPhoneBookManagerProtocol>
{
    _Bool _callerIdIsEmail;
    int _recordId;
    int _multiValueId;
    unsigned int _recordIsSuggested;
    void *_record;
}

@property unsigned int recordIsSuggested; // @synthesize recordIsSuggested=_recordIsSuggested;
@property(nonatomic) void *record; // @synthesize record=_record;
@property int multiValueId; // @synthesize multiValueId=_multiValueId;
@property int recordId; // @synthesize recordId=_recordId;
@property _Bool callerIdIsEmail; // @synthesize callerIdIsEmail=_callerIdIsEmail;
- (_Bool)isABContactASuggestion;
- (id)getLocalizedCallerIdLabelForRecordId:(id)arg1;
- (id)getPersonsNameForRecordId:(id)arg1;
- (id)getCallerIdPropertyMultiValueId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(_Bool)arg3;
- (id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(_Bool)arg3;
- (void)fetchABRecord:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(_Bool)arg3;
- (void)setABRecordMultiValueId:(id)arg1;
- (void)setABRecordId:(id)arg1;
- (void)setABRecordRef:(const void *)arg1;
- (const void *)getABRecordRef;
- (void)releaseCachedRecord;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface TransactionManager : CHSynchronizedLoggable
{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)sendHello_sync;
- (void)setupConnectionHandlers_sync;
- (void)appendTransactions_sync:(id)arg1;
- (void)appendTransactions:(id)arg1;
- (void)createXpcConnection_sync;
- (void)createXpcConnection;
- (void)dealloc;
- (id)init;

@end

@interface WatchDogTimer : CHLogger
{
    NSString *_name;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(CDUnknownBlockType)arg4;

@end

@interface DBManager : CHLogger
{
    NSPersistentStoreCoordinator *fPersistentStoreCoordinator;
}

+ (_Bool)replacePersistentStore:(id)arg1 withURL:(id)arg2;
+ (id)mangedObjectWithURI:(id)arg1 inContext:(id)arg2;
+ (id)getStoreURLforContext:(id)arg1;
+ (id)getPropertyValueForKey:(id)arg1 forContext:(id)arg2;
+ (void)setPropertyValue:(id)arg1 forKey:(id)arg2 forContext:(id)arg3;
+ (id)entityDescriptionHavingName:(id)arg1 forContext:(id)arg2;
+ (_Bool)destroyDBAtLocation:(id)arg1;
+ (_Bool)migrateDataStoreAtLocation:(id)arg1 withDstModelAtLocation:(id)arg2;
+ (id)instanceWithInitDBAtURL:(id)arg1 modelURL:(id)arg2;
+ (id)instanceWithUsingDBAtURL:(id)arg1 modelURL:(id)arg2;
+ (long long)isDataStoreAtURLInitialized:(id)arg1 withModelAtURL:(id)arg2;
+ (id)getPersistenCoordinator:(id)arg1;
+ (id)migrationOptions;
@property(retain, nonatomic) NSPersistentStoreCoordinator *fPersistentStoreCoordinator; // @synthesize fPersistentStoreCoordinator;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (id)init;

@end

@interface CallDBProperties : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSNumber *timer_all; // @dynamic timer_all;
@property(retain, nonatomic) NSNumber *timer_incoming; // @dynamic timer_incoming;
@property(retain, nonatomic) NSNumber *timer_last; // @dynamic timer_last;
@property(retain, nonatomic) NSNumber *timer_lifetime; // @dynamic timer_lifetime;
@property(retain, nonatomic) NSNumber *timer_outgoing; // @dynamic timer_outgoing;
@end

@interface NSDate (DayComparison)
- (_Bool)isSameDayAsDate:(id)arg1;
@end

