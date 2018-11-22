//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct __CFDictionary;

struct __CFHTTPMessage;

struct __CFString;

struct __sFILE;

struct mmcs_cfnetwork_http_context;

struct mmcs_curl_http_context;

struct mmcs_http_context {
    unsigned int _field1;
    int _field2;
    int _field3;
    struct __CFString *_field4;
    long long _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
    int _field17;
    struct __CFUUID *_field18;
    double _field19;
    double _field20;
    long long _field21;
    long long _field22;
    long long _field23;
    double _field24;
    unsigned long long _field25;
    double _field26;
    long long _field27;
    double _field28;
    unsigned long long _field29;
    long long _field30;
    long long _field31;
    struct __CFError *_field32;
    struct __CFHTTPMessage *_field33;
    unsigned char _field34;
    unsigned long long _field35;
    struct __CFDictionary *_field36;
    double _field37;
    struct __CFHTTPMessage *_field38;
    unsigned char _field39;
    struct __CFData *_field40;
    struct __sFILE *_field41;
    struct __sFILE *_field42;
    struct __CFString *_field43;
    struct __CFString *_field44;
    unsigned short _field45;
    unsigned char _field46;
    struct mmcs_metrics_http_info *_field47;
    CDUnknownFunctionPointerType _field48;
    CDUnknownFunctionPointerType _field49;
    CDUnknownFunctionPointerType _field50;
    CDUnknownFunctionPointerType _field51;
    CDUnknownFunctionPointerType _field52;
    CDUnknownFunctionPointerType _field53;
    void *_field54;
    void *_field55;
    struct mmcs_read_stream_pool *_field56;
    struct __CFRunLoop *_field57;
    struct __CFArray *_field58;
    union {
        struct mmcs_cfnetwork_http_context *_field1;
        struct mmcs_nsurlsession_http_context *_field2;
        struct mmcs_curl_http_context *_field3;
    } _field59;
};

struct mmcs_http_context_options {
    struct __CFString *_field1;
    struct __CFHTTPMessage *_field2;
    struct __CFDictionary *_field3;
    double _field4;
    unsigned char _field5;
    unsigned long long _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    void *_field12;
    CDUnknownFunctionPointerType _field13;
    void *_field14;
    unsigned char _field15;
};

struct mmcs_metrics_http_info;

struct mmcs_nsurlsession_http_context;

struct mmcs_read_stream_pool;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MMCS.framework/MMCS
// UUID: 6BA1DD31-81FA-3691-90F8-AD7ECC98F4CE
//
//                           Arch: x86_64
//                Current version: 320.1.0
//          Compatibility version: 1.0.0
//                 Source version: 320.1.0.0.0
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

@protocol NSStreamDelegate <NSObject>

@optional
- (void)stream:(NSStream *)arg1 handleEvent:(unsigned long long)arg2;
@end

@protocol NSURLSessionDataDelegate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 willCacheResponse:(NSCachedURLResponse *)arg3 completionHandler:(void (^)(NSCachedURLResponse *))arg4;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didBecomeDownloadTask:(NSURLSessionDownloadTask *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(long long))arg4;
@end

@protocol NSURLSessionDataDelegatePrivate <NSURLSessionDataDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 _willRetryBackgroundDataTask:(NSURLSessionDataTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 _willRetryBackgroundDataTask:(NSURLSessionDataTask *)arg2 withError:(NSError *)arg3;
@end

@protocol NSURLSessionDelegate <NSObject>

@optional
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)arg1;
- (void)URLSession:(NSURLSession *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSession:(NSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end

@protocol NSURLSessionTaskDelegate <NSURLSessionDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 needNewBodyStream:(void (^)(NSInputStream *))arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg3 completionHandler:(void (^)(long long, NSURLCredential *))arg4;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg3 newRequest:(NSURLRequest *)arg4 completionHandler:(void (^)(NSURLRequest *))arg5;
@end

__attribute__((visibility("hidden")))
@interface MMCSHTTPContext : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSStreamDelegate>
{
    _Bool _didOpen;
    _Bool _isValid;
    _Bool _isTaskDone;
    struct mmcs_http_context *_hc;
    NSURLSession *_urlSession;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSOperationQueue *_operationQueue;
    NSURLSessionDataTask *_dataTask;
    NSDictionary *_timingData;
}

+ (id)sharedMMCSHTTPSession;
@property(nonatomic) _Bool isTaskDone; // @synthesize isTaskDone=_isTaskDone;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) _Bool didOpen; // @synthesize didOpen=_didOpen;
@property(retain, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) struct mmcs_http_context *hc; // @synthesize hc=_hc;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)invalidate;
- (void)cleanupResponse;
- (void)cleanupRequest;
- (void)dealloc;
- (_Bool)send;
- (id)initWithContext:(struct mmcs_http_context *)arg1 options:(const struct mmcs_http_context_options *)arg2;
- (_Bool)createNewRequestBodyInputStream;
- (long long)countOfRequestBodyBytesSent;
- (_Bool)requestBodyCanAcceptData;
- (void)invalidateStreamPair;
@property(readonly, copy) NSString *description;
- (void)requestBodyDone;
- (long long)writeRequestBody:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface MMCSHTTPSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate>
{
    _Bool _isBackground;
    NSString *_sessionName;
    NSString *_sessionConfigurationId;
    NSURLSession *_urlSession;
    NSURLSessionConfiguration *_urlSessionConfiguration;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_contextsForTasks;
}

@property _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(retain, nonatomic) NSMutableDictionary *contextsForTasks; // @synthesize contextsForTasks=_contextsForTasks;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration; // @synthesize urlSessionConfiguration=_urlSessionConfiguration;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSString *sessionConfigurationId; // @synthesize sessionConfigurationId=_sessionConfigurationId;
@property(retain, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)mmcsHTTPContextForTask:(id)arg1 reason:(id)arg2;
- (void)invalidateAndCancel;
- (id)dataTaskWithRequest:(id)arg1 uuid:(id)arg2 forHTTPContext:(id)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 sessionConfigurationId:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

