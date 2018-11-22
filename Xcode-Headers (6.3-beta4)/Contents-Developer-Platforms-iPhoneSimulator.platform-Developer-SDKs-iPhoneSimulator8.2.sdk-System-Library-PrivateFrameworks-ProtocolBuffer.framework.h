//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
// UUID: CC2F63F3-A1CB-30C7-BD74-76CA06901654
//
//                           Arch: x86_64
//                Current version: 225.0.0
//          Compatibility version: 1.0.0
//                 Source version: 225.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
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

@protocol NSURLConnectionDelegate <NSObject>

@optional
- (void)connection:(NSURLConnection *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)connection:(NSURLConnection *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)connection:(NSURLConnection *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(NSURLConnection *)arg1;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
@end

@interface PBDataReader : NSObject
{
    unsigned long long _pos;
    _Bool _error;
    const char *_bytes;
    NSData *_data;
    unsigned long long _length;
}

@property unsigned long long position; // @synthesize position=_pos;
@property unsigned long long length; // @synthesize length=_length;
- (id)readBigEndianShortThenString;
- (id)readBytes:(unsigned int)arg1;
- (void)recall:(const CDStruct_4bcfbbae *)arg1;
- (_Bool)mark:(CDStruct_4bcfbbae *)arg1;
- (id)readData;
- (id)readString;
- (_Bool)readBOOL;
- (long long)readSfixed64;
- (int)readSfixed32;
- (unsigned long long)readFixed64;
- (unsigned int)readFixed32;
- (long long)readSint64;
- (int)readSint32;
- (unsigned long long)readUint64;
- (unsigned int)readUint32;
- (long long)readInt64;
- (int)readInt32;
- (float)readFloat;
- (double)readDouble;
- (long long)readVarInt;
- (BOOL)readInt8;
- (id)readProtoBuffer;
- (unsigned long long)readBigEndianFixed64;
- (unsigned int)readBigEndianFixed32;
- (unsigned short)readBigEndianFixed16;
- (_Bool)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)readTag:(unsigned short *)arg1 andType:(char *)arg2;
- (_Bool)seekToOffset:(unsigned long long)arg1;
- (void)updateData:(id)arg1;
- (unsigned long long)offset;
- (_Bool)hasMoreData;
- (_Bool)hasError;
- (_Bool)isAtEnd;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

@interface PBMutableData : NSMutableData
{
    char *p;
    char *buffer;
    char *end;
}

- (void *)mutableBytes;
- (const void *)bytes;
- (void)_pb_growCapacityBy:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

@interface PBDataWriter : NSObject
{
    PBMutableData *_data;
}

- (void)writeTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)writeBareVarint:(unsigned long long)arg1;
- (void)writeUint8:(unsigned char)arg1;
- (void)writeInt8:(BOOL)arg1;
- (void)writeProtoBuffer:(id)arg1;
- (void)writeBigEndianShortThenString:(id)arg1;
- (void)writeBigEndianFixed32:(unsigned int)arg1;
- (void)writeBigEndianFixed16:(unsigned short)arg1;
- (_Bool)writeData:(id)arg1;
- (unsigned long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)writeData:(id)arg1 forTag:(unsigned short)arg2;
- (void)writeString:(id)arg1 forTag:(unsigned short)arg2;
- (void)writeSfixed64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSfixed32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned short)arg2;
- (void)writeFixed32:(unsigned int)arg1 forTag:(unsigned short)arg2;
- (void)writeFloat:(float)arg1 forTag:(unsigned short)arg2;
- (void)writeDouble:(double)arg1 forTag:(unsigned short)arg2;
- (void)writeSint64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSint32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeBOOL:(_Bool)arg1 forTag:(unsigned short)arg2;
- (void)writeUint64:(unsigned long long)arg1 forTag:(unsigned short)arg2;
- (void)writeUint32:(unsigned int)arg1 forTag:(unsigned short)arg2;
- (void)writeInt64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeInt32:(int)arg1 forTag:(unsigned short)arg2;
- (id)immutableData;
- (id)data;
- (void)dealloc;
- (id)init;

@end

@interface PBRequester : NSObject <NSURLConnectionDelegate>
{
    NSURL *_URL;
    id <PBRequesterDelegate> _delegate;
    NSURLConnection *_connection;
    NSRunLoop *_connectionRunLoop;
    NSThread *_startThread;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    unsigned long long _lastGoodDataOffset;
    unsigned long long _uploadPayloadSize;
    unsigned long long _downloadPayloadSize;
    unsigned long long _timeRequestSent;
    unsigned long long _timeResponseReceived;
    long long _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSDictionary *_httpResponseHeaders;
    NSMutableDictionary *_httpRequestHeaders;
    double _timeoutSeconds;
    struct __CFRunLoopTimer *_timeoutTimer;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
    _Bool _didNotifyRequestCompleted;
    NSArray *_clientCertificates;
    NSDictionary *_connectionProperties;
    _Bool _shouldHandleCookies;
    struct {
        unsigned int ignoresResponse:1;
        unsigned int loading:1;
        unsigned int needsCancel:1;
        unsigned int responseStatusSet:1;
        unsigned int parsedResponseHeader:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int delegateDidFinish:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidFailWithError:1;
        unsigned int paused:1;
        unsigned int resuming:1;
    } _flags;
}

+ (_Bool)usesEncodedMessages;
@property(nonatomic) _Bool shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property(retain, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property(readonly, nonatomic) unsigned long long downloadPayloadSize; // @synthesize downloadPayloadSize=_downloadPayloadSize;
@property(readonly, nonatomic) unsigned long long uploadPayloadSize; // @synthesize uploadPayloadSize=_uploadPayloadSize;
@property(retain, nonatomic) NSString *logResponseToFile; // @synthesize logResponseToFile=_logResponseToFile;
@property(retain, nonatomic) NSString *logRequestToFile; // @synthesize logRequestToFile=_logRequestToFile;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(retain, nonatomic) NSDictionary *httpResponseHeaders; // @synthesize httpResponseHeaders=_httpResponseHeaders;
@property(retain, nonatomic) NSRunLoop *connectionRunLoop; // @synthesize connectionRunLoop=_connectionRunLoop;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) id <PBRequesterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)startWithConnectionProperties:(id)arg1;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2 connectionProperties:(id)arg3;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2;
- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(id)arg1;
- (id)decodeResponseData:(id)arg1;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(CDUnknownBlockType)arg2;
- (void)_timeoutTimerFired;
- (void)_resetTimeoutTimer;
- (void)_removeTimeoutTimer;
- (void)_startTimeoutTimer;
@property(readonly, nonatomic) unsigned long long requestResponseTime;
- (id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)_tryParseData;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (_Bool)readResponsePreamble:(id)arg1;
- (void)cancelWithErrorCode:(long long)arg1;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_failWithError:(id)arg1;
- (void)resume;
- (_Bool)isPaused;
- (void)pause;
- (void)cancel;
- (void)_cancelNoNotify;
- (void)_start;
- (void)start;
- (void)_serializePayload:(CDUnknownBlockType)arg1;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (_Bool)_sendPayload:(id)arg1 error:(id *)arg2;
- (id)_connectionRunLoop;
- (void)writeRequest:(id)arg1 into:(id)arg2;
- (id)requestPreamble;
- (id)_osVersion;
- (id)_applicationID;
- (id)_languageLocale;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)responseForInternalRequest:(id)arg1;
- (void)addInternalRequest:(id)arg1;
- (id)internalRequests;
- (id)responseForRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
@property(readonly, nonatomic) NSArray *requests;
- (void)setNeedsCancel;
@property _Bool needsCancel;
@property(nonatomic) _Bool ignoresResponse;
- (void)_cleanup;
- (void)dealloc;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface PBCodable : NSObject <NSSecureCoding>
{
}

+ (id)options;
+ (_Bool)supportsSecureCoding;
- (id)formattedText;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1;
- (id)init;

@end

@interface PBRequest : PBCodable
{
}

- (Class)responseClass;
- (unsigned int)requestTypeCode;

@end

@interface PBStreamWriter : NSObject
{
}

+ (id)writeProtoBuffers:(id)arg1 toFile:(id)arg2;

@end

@interface PBMessageStreamReader : NSObject
{
    NSInputStream *_stream;
    Class _classOfNextMessage;
    unsigned long long _position;
}

@property(readonly) unsigned long long position; // @synthesize position=_position;
@property Class classOfNextMessage; // @synthesize classOfNextMessage=_classOfNextMessage;
- (id)nextMessage;
- (void)dealloc;
- (id)initWithStream:(id)arg1;

@end

@interface PBMessageStreamWriter : NSObject
{
    NSOutputStream *_stream;
}

- (_Bool)writeMessage:(id)arg1;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

@end

@interface PBStreamReader : NSObject
{
}

+ (id)readProtoBuffersOfClass:(Class)arg1 fromFile:(id)arg2 error:(id *)arg3;

@end

@interface PBUnknownFields : NSObject
{
    char *_buf;
    unsigned long long _bufSpace;
    unsigned long long _bufLen;
}

- (void)dealloc;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;

@end

@interface NSMutableArray (PBExtensions)
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
@end

