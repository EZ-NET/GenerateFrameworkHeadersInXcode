//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/IDEGit.ideplugin/Contents/MacOS/IDEGit
// UUID: EBEFBB1D-FC67-37E6-B409-C7CF9DB98E7B
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

@protocol IDESourceControlProtocol <NSObject>
- (IDESourceControlOperation *)operationForRequest:(IDESourceControlRequest *)arg1;
- (BOOL)authenticationRequiredForRequest:(IDESourceControlRequest *)arg1;
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
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@interface GitOperation : IDESourceControlTaskOperation
{
}

+ (void)parseForStatusAndPathWithLine:(id)arg1 withFullPath:(id)arg2 puttingIntoDictionary:(id)arg3 blackListedFilePaths:(id)arg4;
+ (void)setupFilePath:(id)arg1 asUnversionedWithDictionary:(id)arg2;
+ (id)dvtFilePathForPathString:(id)arg1 withFullPath:(id)arg2;
- (void)addQuietFlagIfNeeded:(id)arg1 defaultFlag:(BOOL)arg2;
- (id)errorFromErrorMessage:(id)arg1;
- (id)defaultArguments;
- (id)launchPath;
- (id)initWithRequest:(id)arg1;

@end

@interface GitCreateRepositoryOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitCloneOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitResetOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitRevertOperation : GitOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitCheckoutOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitListOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitListFilesOperation : GitOperation
{
}

- (void)parseData;
- (id)launchPath;
- (id)initWithRequest:(id)arg1;

@end

@interface GitLogOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitLogFilesOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;
- (id)_prettyFormatWithArray:(id)arg1;

@end

@interface GitExportTreeOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitFetchOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitAddOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitBlameOperation : GitOperation
{
    NSDateFormatter *_formatter;
}

- (void).cxx_destruct;
- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitBranchOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitCommitOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitCurrentBranchOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitIgnoreOperation : IDESourceControlOperation
{
}

@end

@interface GitListRemotesOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitListStandardRemotesOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitListRemoteBranchesOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitTrackingBranchNameOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitRemoteRefForBranchOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitMergeBranchForBranchOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitAddRemoteOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitRemoveRemoteOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitEditRemoteOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitTrackRemoteBranchOperation : GitOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitInfoOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitMergeBaseOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitListSVNRemoteOperation : GitOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitFetchRemoteOriginOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitFetchSVNRemoteOriginOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitFetchSVNRemoteNameOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitMergeOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitRemoveOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitStatusOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitUpdateOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitDiffOperation : GitOperation
{
    BOOL _diffNameAndStatusOnly;
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitSvnFetchOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitSvnRebaseOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitPullOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitPushOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitResetHeadOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitTarOperation : IDESourceControlTaskOperation
{
}

- (void)parseData;
- (id)launchPath;
- (id)initWithRequest:(id)arg1;

@end

@interface GitHeadOperation : IDESourceControlTaskOperation
{
}

- (void)parseData;
- (id)launchPath;
- (id)initWithRequest:(id)arg1;

@end

@interface GitFirstCommitOperation : GitOperation
{
    IDESourceControlTaskOperation *_pipeToOperation;
}

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1;
- (id)pipeToOperation;

@end

@interface GitExportFileOperation : GitOperation
{
    IDESourceControlTaskOperation *_pipeToOperation;
}

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1;
- (id)pipeToOperation;

@end

@interface GitListBranchesOperation : GitOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface GitCopyOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitMakeDirectoryOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface GitMoveOperation : GitOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface GitPatchOperation : IDESourceControlTaskOperation
{
}

- (void)parseData;
- (id)launchPath;
- (id)initWithRequest:(id)arg1;

@end

@interface GitController : NSObject <IDESourceControlProtocol>
{
}

- (id)operationForRequest:(id)arg1;
- (BOOL)authenticationRequiredForRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface NSString (IDEGit)
- (id)idegit_stringByReplacingOctalEscapesUsingEncoding:(unsigned long long)arg1;
- (id)idegit_stringByDeletingQuotes;
- (int)idegit_sourceControlStatus;
@end

@interface NSData (GitUtilities)
- (id)git_componentsSeparatedByNULLTerminator;
@end

