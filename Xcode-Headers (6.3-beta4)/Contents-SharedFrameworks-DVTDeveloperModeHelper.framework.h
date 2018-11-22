//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/SharedFrameworks/DVTDeveloperModeHelper.framework/Versions/A/DVTDeveloperModeHelper
// UUID: D6A9E4BC-B488-3A25-AB1F-C52703E636F3
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6760.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface DVTDeveloperModeHelper : NSObject
{
}

- (id)_stringForFileHandleData:(id)arg1;
- (void)setDeveloperModeEnabled:(BOOL)arg1;
- (BOOL)isDeveloperModeEnabled;

@end

@interface DVTDeveloperModeAlertHelper : NSObject
{
    BOOL _shouldAskUserAboutDeveloperMode;
    int _messageType;
    NSWindow *_parentWindow;
}

+ (void)initialize;
@property(nonatomic) BOOL shouldAskUserAboutDeveloperMode; // @synthesize shouldAskUserAboutDeveloperMode=_shouldAskUserAboutDeveloperMode;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
@property(readonly) NSString *informativeText;
- (void)setDeveloperModeWithReturnCode:(long long)arg1;
- (void)askToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
