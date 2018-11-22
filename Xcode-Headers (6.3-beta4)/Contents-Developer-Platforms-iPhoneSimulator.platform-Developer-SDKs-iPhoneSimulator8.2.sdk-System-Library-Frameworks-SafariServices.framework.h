//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SafariServices.framework/SafariServices
// UUID: 24632348-8DB6-3B36-A550-5E761B169EDD
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 2323.17.1.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
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

@protocol WebBookmarksXPCConnectionDelegate <NSObject>
- (void)connection:(WebBookmarksXPCConnection *)arg1 didCloseWithError:(NSObject<OS_xpc_object> *)arg2;
@end

@interface SSReadingList : NSObject <WebBookmarksXPCConnectionDelegate>
{
    WebBookmarksXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_xpc_object> *_batchedReadingListItems;
    _Bool _batchScheduled;
}

+ (id)defaultReadingList;
+ (_Bool)supportsURL:(id)arg1;
- (void).cxx_destruct;
- (_Bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)_init;
- (id)init;
- (void)_sendBatchedReadingListItems;
- (void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

