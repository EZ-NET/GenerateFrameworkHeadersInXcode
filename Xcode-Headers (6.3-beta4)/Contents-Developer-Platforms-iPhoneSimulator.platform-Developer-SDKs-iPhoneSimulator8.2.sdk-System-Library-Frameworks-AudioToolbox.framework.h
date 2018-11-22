//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct InterAppAudioAppInfo {
    _Bool _field1;
    int _field2;
    struct ObjCUIImage *_field3;
    struct __CFString *_field4;
    struct __CFString *_field5;
    struct __CFURL *_field6;
};

struct ObjCUIImage;

struct __CFString;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
// UUID: 7CC00FD2-05FB-315A-9965-ACCBCDE86003
//
//                           Arch: x86_64
//                Current version: 492.0.0
//          Compatibility version: 1.0.0
//                 Source version: 724.6.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

__attribute__((visibility("hidden")))
@interface InterAppAudioApp : NSObject
{
    _Bool _isHost;
    _Bool _isCurrentApp;
    long long _key;
    NSString *_name;
    UIImage *_icon;
    NSURL *_url;
}

@property(readonly, nonatomic) _Bool isCurrentApp; // @synthesize isCurrentApp=_isCurrentApp;
@property(readonly, nonatomic) _Bool isHost; // @synthesize isHost=_isHost;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long key; // @synthesize key=_key;
- (id)description;
- (void)dealloc;
- (id)init:(const struct InterAppAudioAppInfo *)arg1 iconSize:(float)arg2;

@end

@interface InterAppAudioGroup : NSObject
{
}

+ (id)sharedInstance;
- (id)getApps:(float)arg1;

@end

