//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/DebuggerLLDBService.ideplugin/Contents/MacOS/DebuggerLLDBService
// UUID: 532D5CDC-7237-317E-AB8E-B3B14840469A
//
//                           Arch: x86_64
//                Current version: 6751.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6751.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../
//                               = /Applications/Xcode.app/Contents/PlugIns
//                       Run path: @loader_path/../../Library/PrivateFrameworks/
//                               = /Applications/Xcode.app/Contents/PlugIns/DebuggerLLDBService.ideplugin/Library/PrivateFrameworks
//

__attribute__((visibility("hidden")))
@interface DBGLLDBDebugLocalService : IDERunDeviceService
{
}

+ (id)_loadDebuggerExtension;
+ (id)capability;
- (id)operationWorkerWithLaunchSession:(id)arg1 error:(id *)arg2;

@end

__attribute__((visibility("hidden")))
@interface DBGLLDBRunLocalService : IDERunDeviceService
{
}

+ (id)capability;
- (id)operationWorkerWithLaunchSession:(id)arg1 error:(id *)arg2;
- (id)capabilitySequenceForLaunchSession:(id)arg1;

@end

