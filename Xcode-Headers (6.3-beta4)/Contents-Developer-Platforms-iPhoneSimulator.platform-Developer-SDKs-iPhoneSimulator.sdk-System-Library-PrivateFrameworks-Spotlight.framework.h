//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
// UUID: 472B82A4-54FF-3465-8C7F-F19F0B3554F5
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 354.3.1.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface SPSpotlightManager : NSObject
{
    NSString *_displayID;
}

+ (id)sharedManager;
- (void)eraseIndexForApplication:(id)arg1 category:(id)arg2;
- (void)application:(id)arg1 modifiedRecordIDs:(id)arg2 forCategory:(id)arg3;
- (void)appModifiedRecordIDs:(id)arg1 forCategory:(id)arg2;
- (void)_processIdentifiers:(id)arg1 forApplication:(id)arg2 andCategory:(id)arg3;
- (void)dealloc;
- (id)init;

@end
