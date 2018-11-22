//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/Xcode3Core.ideplugin/Contents/MacOS/Xcode3Core
// UUID: 3173DF1E-3CAB-3077-A3E7-547E7D133CE7
//
//                           Arch: x86_64
//                Current version: 6728.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6728.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../Frameworks
//                               = /Applications/Xcode.app/Contents/PlugIns/Xcode3Core.ideplugin/Contents/Frameworks
//                       Run path: @loader_path/../../../
//                               = /Applications/Xcode.app/Contents/PlugIns
//                       Run path: @executable_path/../Frameworks
//                               = /Applications/Xcode.app/Contents/PlugIns/Xcode3Core.ideplugin/Contents/Frameworks
//

@protocol IDEContainerDelegate <NSObject>

@optional
- (void)_container:(IDEContainer *)arg1 didChangeFromFilePath:(DVTFilePath *)arg2 toFilePath:(DVTFilePath *)arg3;
@end

@protocol IDEInitialization
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
@end

@protocol IDELocalizationWorkReadStrings
@property(retain) NSDictionary *IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings;
@property(retain) DVTFilePath *IDELocalizationWork_path;
@end

@protocol IDELocalizationWorkSystemTask
@property(retain) NSNumber *IDELocalizationWork_exitStatus;
@property(retain) NSArray *IDELocalizationWork_arguments;
@property(retain) DVTFilePath *IDELocalizationWork_launchPath;
@end

@protocol IDELocalizationWorkWriteStrings
@property(retain) DVTFilePath *IDELocalizationWork_path;
@property BOOL IDELocalizationWork_createdNewSubitem;
@property(retain) DVTLocale *IDELocalizationWork_language;
@property(retain) IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group;
@property(retain) IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container;
@property(retain) NSDictionary *IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings;
@end

@protocol IDELocalizedGroup <NSObject>
- (void)addNewReferenceForLocale:(DVTLocale *)arg1 filePath:(DVTFilePath *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (DVTFilePath *)proposedFilePathForLocalization:(DVTLocale *)arg1 fileType:(DVTFileDataType *)arg2;
- (IDEFileReference *)subitemForLocale:(DVTLocale *)arg1;
- (IDEContainer<IDELocalizedContainer> *)localizedContainer;
- (NSArray *)subitems;
@end

@protocol IDEPortalEntitlementsCoordinatorPlatform <NSObject>
- (NSDictionary *)willRequestProfileWithFeatures:(NSDictionary *)arg1 usingWildcardAppID:(BOOL)arg2;
- (NSDictionary *)didReadProfileFeatures:(NSDictionary *)arg1;
- (id)initWithCapabilitiesContext:(id <IDECapabilitiesContextProviding>)arg1;
@end

@protocol IDESourceTreeProvider <NSObject>
+ (NSString *)stringByExpandingSourceTreeReferencesInString:(NSString *)arg1;
@end

@protocol IDEWorkspaceDelegate <IDEContainerDelegate>
- (void)_workspace:(IDEWorkspace *)arg1 failedToResolveContainerForProjectFile:(IDEFileReference *)arg2;

@optional
- (void)_workspace:(IDEWorkspace *)arg1 didChangeSimpleFilesFocusedTo:(BOOL)arg2;
- (void)_workspace:(IDEWorkspace *)arg1 didChangeFinishedLoadingTo:(BOOL)arg2;
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

@protocol Xcode3ProjectCreationErrorHandling <NSObject>
- (NSString *)errorMessage;
- (BOOL)didEncounterFatalError;

@optional
- (BOOL)shouldOpenProjectReadOnlyAtPath:(NSString *)arg1;
- (void)unableToOpenProjectAtPath:(NSString *)arg1 reason:(NSString *)arg2;
- (BOOL)shouldOpenProjectOfMismatchingVersion:(unsigned long long)arg1 atPath:(NSString *)arg2;
@end

@interface Xcode3LocalizedSourceStringsAdaptorTableWorkContext : IDELocalizationWorkContext <IDELocalizationWorkReadStrings>
{
    DVTFilePath *IDELocalizationWork_path;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    NSString *_tableName;
}

@property(retain) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3LocalizedSourceStringsAdaptorSourceWorkContext : IDELocalizationWorkContext <IDELocalizationWorkSystemTask>
{
    DVTFilePath *IDELocalizationWork_launchPath;
    NSArray *IDELocalizationWork_arguments;
    NSNumber *IDELocalizationWork_exitStatus;
    NSArray *_sourcePaths;
    NSString *_tempPath;
    NSArray *_readTableContexts;
}

@property(retain) NSArray *readTableContexts; // @synthesize readTableContexts=_readTableContexts;
@property(retain) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain) NSArray *sourcePaths; // @synthesize sourcePaths=_sourcePaths;
@property(retain) NSNumber *IDELocalizationWork_exitStatus; // @synthesize IDELocalizationWork_exitStatus;
@property(retain) NSArray *IDELocalizationWork_arguments; // @synthesize IDELocalizationWork_arguments;
@property(retain) DVTFilePath *IDELocalizationWork_launchPath; // @synthesize IDELocalizationWork_launchPath;
- (void).cxx_destruct;

@end

@interface Xcode3LocalizedSourceStringsAdaptorTargetWorkContext : IDELocalizationWorkContext
{
    Xcode3Target *_target;
    NSArray *_files;
    NSMutableDictionary *_mergedStringsByTable;
    NSMutableDictionary *_mergedCommentsByTable;
}

@property(retain) NSMutableDictionary *mergedCommentsByTable; // @synthesize mergedCommentsByTable=_mergedCommentsByTable;
@property(retain) NSMutableDictionary *mergedStringsByTable; // @synthesize mergedStringsByTable=_mergedStringsByTable;
@property(retain) NSArray *files; // @synthesize files=_files;
@property(retain) Xcode3Target *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3LocalizedSourceStringsAdaptor : IDELocalizedStringsAdaptor
{
    Xcode3Target *_target;
}

+ (id)adaptedResourcesForLocalizedContainer:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)localizedGroupIdentifier;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 tableName:(id)arg3 baseStrings:(id)arg4 baseComments:(id)arg5 target:(id)arg6;

@end

@interface Xcode3LocalizedIndependentStringsAdaptorTargetWorkContext : IDELocalizationWorkContext <IDELocalizationWorkSystemTask>
{
    DVTFilePath *IDELocalizationWork_launchPath;
    NSArray *IDELocalizationWork_arguments;
    NSNumber *IDELocalizationWork_exitStatus;
    Xcode3Target *_target;
    NSArray *_sourcePaths;
    NSArray *_tableNames;
    NSString *_tempPath;
}

@property(retain) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain) NSArray *tableNames; // @synthesize tableNames=_tableNames;
@property(retain) NSArray *sourcePaths; // @synthesize sourcePaths=_sourcePaths;
@property(retain) Xcode3Target *target; // @synthesize target=_target;
@property(retain) NSNumber *IDELocalizationWork_exitStatus; // @synthesize IDELocalizationWork_exitStatus;
@property(retain) NSArray *IDELocalizationWork_arguments; // @synthesize IDELocalizationWork_arguments;
@property(retain) DVTFilePath *IDELocalizationWork_launchPath; // @synthesize IDELocalizationWork_launchPath;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3LocalizedIndependentStringsAdaptor : IDELocalizedStringsAdaptor
{
    Xcode3Target *_target;
}

+ (id)adaptedResourcesForLocalizedContainer:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)localizedGroupIdentifier;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 tableName:(id)arg3 baseStrings:(id)arg4 baseComments:(id)arg5 target:(id)arg6;

@end

@interface Xcode3Core : NSObject
{
}

@end

@interface Xcode3CoreInitializer : NSObject <IDEInitialization>
{
}

+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;

@end

@interface Xcode3BuildSettingsDictionary : NSObject
{
}

+ (id)macroDefinitionTableByParsingXcconfigFileAtPath:(id)arg1 baseDirectoryPath:(id)arg2 error:(id *)arg3;

@end

@interface Xcode3SourceTrees : NSObject <IDESourceTreeProvider>
{
}

+ (id)stringByExpandingSourceTreeReferencesInString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface FirstLaunchExperienceHelper : NSObject
{
}

+ (BOOL)needToInstallPackages;

@end

@interface Xcode3LocalizedInfoPlistAdaptor : IDELocalizedPlistAdaptor
{
    Xcode3Target *_target;
}

+ (id)adaptedResourcesForLocalizedContainer:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)filteredBaseStringsByKey:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 plistFileReference:(id)arg3 target:(id)arg4;

@end

@interface Xcode3TargetPortalEntitlementsCoordinatorMacPlatform : NSObject <IDEPortalEntitlementsCoordinatorPlatform>
{
    id <IDECapabilitiesContextProviding> _capabilitiesContext;
}

@property(retain, nonatomic) id <IDECapabilitiesContextProviding> capabilitiesContext; // @synthesize capabilitiesContext=_capabilitiesContext;
- (void).cxx_destruct;
- (id)willRequestProfileWithFeatures:(id)arg1 usingWildcardAppID:(BOOL)arg2;
- (id)didReadProfileFeatures:(id)arg1;
- (id)initWithCapabilitiesContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface _Xcode3CommandLineProjectCreationErrorHandler : NSObject <Xcode3ProjectCreationErrorHandling>
{
    BOOL _didEncounterFatalError;
    NSString *_errorMessage;
}

@property(copy) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property BOOL didEncounterFatalError; // @synthesize didEncounterFatalError=_didEncounterFatalError;
- (void).cxx_destruct;
- (BOOL)shouldOpenProjectReadOnlyAtPath:(id)arg1;
- (void)unableToOpenProjectAtPath:(id)arg1 reason:(id)arg2;
- (BOOL)shouldOpenProjectOfMismatchingVersion:(unsigned long long)arg1 atPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface Xcode3CommandLineBuildTool : NSObject <IDEWorkspaceDelegate>
{
    id _containerDidOpenContainerNotificationObserver;
    BOOL _shouldExit;
    BOOL _exportWithOriginalSigningIdentity;
    BOOL _allTargets;
    BOOL _skipUnsupportedDestinations;
    BOOL _parallelizeTargets;
    BOOL _dontActuallyRunCommands;
    BOOL _skipUnavailableActions;
    BOOL _forceImport;
    int _toolCommand;
    NSString *_name;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    long long _exitStatus;
    NSString *_projectName;
    NSArray *_targetNames;
    NSString *_workspaceName;
    NSString *_schemeName;
    NSString *_xcconfigPathFromOption;
    NSString *_xcconfigPathFromEnvVar;
    NSString *_actionResultsBundlePathWithBaselineOverridesFromOption;
    NSString *_automaticBaselineDescription;
    NSString *_nameOfFileToFind;
    NSString *_archivePath;
    NSString *_exportDestinationPath;
    NSString *_exportFormat;
    NSString *_exportSigningIdentity;
    NSString *_exportInstallerIdentity;
    NSString *_exportProvisioningProfile;
    NSArray *_buildActions;
    NSArray *_potentialBuildActions;
    NSArray *_buildSettingAssignmentStrings;
    Xcode3Project *_project;
    NSMutableArray *_targets;
    IDEWorkspace *_workspace;
    IDEScheme *_scheme;
    NSMutableDictionary *_perActionRunDestinations;
    NSString *_configurationName;
    NSArray *_architectures;
    NSString *_baseSdkName;
    NSArray *_toolchainNames;
    NSArray *_destinationSpecifications;
    NSNumber *_destinationTimeout;
    NSNumber *_maxConcurrency;
    NSString *_localizationPath;
    NSArray *_exportLanguages;
    DVTMacroDefinitionTable *_synthesizedMacros;
    DVTMacroDefinitionTable *_macrosFromCommandLine;
    DVTMacroDefinitionTable *_macrosFromXcconfigOption;
    DVTMacroDefinitionTable *_macrosFromXcconfigEnvVar;
    NSMutableDictionary *_userDefaults;
    NSOperationQueue *_buildToolQueue;
    NSString *_resultBundlePath;
    NSDictionary *_serverOptions;
}

+ (id)sharedCommandLineBuildTool;
+ (id)workspaceFilesInDirectory:(id)arg1;
+ (id)knownWorkspaceWrapperExtensions;
+ (id)timingLogAspect;
@property(copy) NSDictionary *serverOptions; // @synthesize serverOptions=_serverOptions;
@property(retain) NSString *resultBundlePath; // @synthesize resultBundlePath=_resultBundlePath;
@property(retain) NSOperationQueue *buildToolQueue; // @synthesize buildToolQueue=_buildToolQueue;
@property(retain) NSMutableDictionary *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain) DVTMacroDefinitionTable *macrosFromXcconfigEnvVar; // @synthesize macrosFromXcconfigEnvVar=_macrosFromXcconfigEnvVar;
@property(retain) DVTMacroDefinitionTable *macrosFromXcconfigOption; // @synthesize macrosFromXcconfigOption=_macrosFromXcconfigOption;
@property(retain) DVTMacroDefinitionTable *macrosFromCommandLine; // @synthesize macrosFromCommandLine=_macrosFromCommandLine;
@property(retain) DVTMacroDefinitionTable *synthesizedMacros; // @synthesize synthesizedMacros=_synthesizedMacros;
@property BOOL forceImport; // @synthesize forceImport=_forceImport;
@property(retain) NSArray *exportLanguages; // @synthesize exportLanguages=_exportLanguages;
@property(retain) NSString *localizationPath; // @synthesize localizationPath=_localizationPath;
@property BOOL skipUnavailableActions; // @synthesize skipUnavailableActions=_skipUnavailableActions;
@property BOOL dontActuallyRunCommands; // @synthesize dontActuallyRunCommands=_dontActuallyRunCommands;
@property(copy) NSNumber *maxConcurrency; // @synthesize maxConcurrency=_maxConcurrency;
@property BOOL parallelizeTargets; // @synthesize parallelizeTargets=_parallelizeTargets;
@property(copy) NSNumber *destinationTimeout; // @synthesize destinationTimeout=_destinationTimeout;
@property BOOL skipUnsupportedDestinations; // @synthesize skipUnsupportedDestinations=_skipUnsupportedDestinations;
@property(copy) NSArray *destinationSpecifications; // @synthesize destinationSpecifications=_destinationSpecifications;
@property(retain) NSArray *toolchainNames; // @synthesize toolchainNames=_toolchainNames;
@property(copy) NSString *baseSdkName; // @synthesize baseSdkName=_baseSdkName;
@property(retain) NSArray *architectures; // @synthesize architectures=_architectures;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(retain) NSMutableDictionary *perActionRunDestinations; // @synthesize perActionRunDestinations=_perActionRunDestinations;
@property(retain) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property BOOL allTargets; // @synthesize allTargets=_allTargets;
@property(retain) NSMutableArray *targets; // @synthesize targets=_targets;
@property(retain) Xcode3Project *project; // @synthesize project=_project;
@property(retain) NSArray *buildSettingAssignmentStrings; // @synthesize buildSettingAssignmentStrings=_buildSettingAssignmentStrings;
@property(retain) NSArray *potentialBuildActions; // @synthesize potentialBuildActions=_potentialBuildActions;
@property(retain) NSArray *buildActions; // @synthesize buildActions=_buildActions;
@property BOOL exportWithOriginalSigningIdentity; // @synthesize exportWithOriginalSigningIdentity=_exportWithOriginalSigningIdentity;
@property(copy) NSString *exportProvisioningProfile; // @synthesize exportProvisioningProfile=_exportProvisioningProfile;
@property(copy) NSString *exportInstallerIdentity; // @synthesize exportInstallerIdentity=_exportInstallerIdentity;
@property(copy) NSString *exportSigningIdentity; // @synthesize exportSigningIdentity=_exportSigningIdentity;
@property(copy) NSString *exportFormat; // @synthesize exportFormat=_exportFormat;
@property(copy) NSString *exportDestinationPath; // @synthesize exportDestinationPath=_exportDestinationPath;
@property(copy) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property(copy) NSString *nameOfFileToFind; // @synthesize nameOfFileToFind=_nameOfFileToFind;
@property(copy) NSString *automaticBaselineDescription; // @synthesize automaticBaselineDescription=_automaticBaselineDescription;
@property(copy) NSString *actionResultsBundlePathWithBaselineOverridesFromOption; // @synthesize actionResultsBundlePathWithBaselineOverridesFromOption=_actionResultsBundlePathWithBaselineOverridesFromOption;
@property(copy) NSString *xcconfigPathFromEnvVar; // @synthesize xcconfigPathFromEnvVar=_xcconfigPathFromEnvVar;
@property(copy) NSString *xcconfigPathFromOption; // @synthesize xcconfigPathFromOption=_xcconfigPathFromOption;
@property(copy) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(copy) NSString *workspaceName; // @synthesize workspaceName=_workspaceName;
@property(retain) NSArray *targetNames; // @synthesize targetNames=_targetNames;
@property(copy) NSString *projectName; // @synthesize projectName=_projectName;
@property(nonatomic) BOOL shouldExit; // @synthesize shouldExit=_shouldExit;
@property int toolCommand; // @synthesize toolCommand=_toolCommand;
@property long long exitStatus; // @synthesize exitStatus=_exitStatus;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)run;
- (void)_importLocalizationsAndExit;
- (void)_exportLocalizationsAndExit;
- (void)_exportArchiveAndExit;
- (void)_printVerboseSDKListAndExit;
- (void)_printVerboseInfoForSDK:(id)arg1 keysToEmit:(id)arg2;
- (void)_printShortSDKListAndExit;
- (void)_enumerateAllPlatformsAlphabeticallyWithBlock:(CDUnknownBlockType)arg1;
- (void)_printPathToLibraryAndExit;
- (void)_printPathToExecutableAndExit;
- (id)_sdkForUseWithFind;
- (void)_printContainerInformationAndExit;
- (void)_printVersionInfoAndExit;
- (void)_showBuildSettings;
- (void)_buildWithTimingSection:(id)arg1;
- (void)unableToOpenProjectAtPath:(id)arg1 reason:(id)arg2;
- (void)_workspace:(id)arg1 failedToResolveContainerForProjectFile:(id)arg2;
- (void)_resolveInputOptionsWithTimingSection:(id)arg1;
- (void)_resolveRunDestinationsForBuildAction:(id)arg1;
- (void)_resolveBaseSdk;
- (id)_resolveSdk:(id)arg1;
- (id)_stringByResolvingSymlinksInPath:(id)arg1;
- (void)_parseOptions;
- (id)_actionStringForBuildAction:(id)arg1;
- (id)_schemeCommandForBuildAction:(id)arg1 outSchemeTask:(int *)arg2;
- (id)_supportedBuildActions;
- (void)_printErrorString:(id)arg1 andFailWithCode:(long long)arg2;
- (void)_printWarningString:(id)arg1;
- (unsigned long long)_projectLoadingTimeout;
- (unsigned long long)_schemeLoadingTimeout;
- (id)overridingProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface CommandLineLicenseHelper : NSObject
{
    NSString *_licensePath;
    NSBundle *_xcodeBundle;
    DVTLicenseAgreementHelper *_licenseAgreementHelper;
}

+ (BOOL)agreeToLicense;
+ (BOOL)hasAgreedToLicense;
+ (unsigned long long)showCommandLineLicenseUIIfNeeded:(BOOL)arg1;
- (void).cxx_destruct;
- (BOOL)_agreeToLicense;
- (unsigned long long)showLicenseUIIfNeeded:(BOOL)arg1;
- (BOOL)_isRunningAsSuperUser;
- (BOOL)_shouldShowLicenseAgreement;
- (BOOL)userHasWriteableHomeDirectory;
- (BOOL)isTTY;
- (unsigned long long)promptForAgreement;
- (void)printLicense;
- (id)launchTaskAndReturnOutputForTaskPath:(id)arg1 taskArguments:(id)arg2;
- (BOOL)displayLicenseHasAgreed:(BOOL)arg1;
- (const char *)getLicensePath;
- (id)initWithXcodeBundle:(id)arg1;

@end

@interface Xcode3LocalizedIBDocumentAdaptorReadWorkContext : IDELocalizationWorkContext <IDELocalizationWorkReadStrings, IDELocalizationWorkSystemTask>
{
    DVTFilePath *IDELocalizationWork_path;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    DVTFilePath *IDELocalizationWork_launchPath;
    NSArray *IDELocalizationWork_arguments;
    NSNumber *IDELocalizationWork_exitStatus;
    Xcode3LocalizedIBDocumentAdaptor *_adaptor;
    IDEFileReference *_fileReference;
    DVTLocale *_language;
    NSString *_tempPath;
}

@property(retain) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain) DVTLocale *language; // @synthesize language=_language;
@property(retain) IDEFileReference *fileReference; // @synthesize fileReference=_fileReference;
@property(retain) Xcode3LocalizedIBDocumentAdaptor *adaptor; // @synthesize adaptor=_adaptor;
@property(retain) NSNumber *IDELocalizationWork_exitStatus; // @synthesize IDELocalizationWork_exitStatus;
@property(retain) NSArray *IDELocalizationWork_arguments; // @synthesize IDELocalizationWork_arguments;
@property(retain) DVTFilePath *IDELocalizationWork_launchPath; // @synthesize IDELocalizationWork_launchPath;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3LocalizedIBDocumentAdaptorWriteWorkContext : IDELocalizationWorkContext <IDELocalizationWorkWriteStrings>
{
    BOOL IDELocalizationWork_createdNewSubitem;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container;
    IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group;
    DVTLocale *IDELocalizationWork_language;
    DVTFilePath *IDELocalizationWork_path;
}

@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
@property BOOL IDELocalizationWork_createdNewSubitem; // @synthesize IDELocalizationWork_createdNewSubitem;
@property(retain) DVTLocale *IDELocalizationWork_language; // @synthesize IDELocalizationWork_language;
@property(retain) IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group; // @synthesize IDELocalizationWork_group;
@property(retain) IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container; // @synthesize IDELocalizationWork_container;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3LocalizedIBDocumentAdaptor : IDELocalizedResourceAdaptor
{
    NSMutableDictionary *_stringsCache;
    NSDictionary *_baseStrings;
    NSDictionary *_commentsByKey;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
+ (id)adaptedResourcesForLocalizedContainer:(id)arg1;
@property(retain) NSDictionary *commentsByKey; // @synthesize commentsByKey=_commentsByKey;
@property(retain) NSDictionary *baseStrings; // @synthesize baseStrings=_baseStrings;
- (void).cxx_destruct;
- (void)setStringsByKey:(id)arg1 forLanguage:(id)arg2;
- (id)stringsByKeyForLanguage:(id)arg1;
- (id)localizedGroupIdentifier;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2;

@end

@interface Xcode3InstallsrcCommandLineVerb : IDEWorkspaceBasedCommandLineVerb
{
}

+ (int)performWithEnvironment:(id)arg1;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;

@end

@interface Xcode3BuildSettingsCommandLineVerb : IDESchemeBasedCommandLineVerb
{
}

+ (int)performWithEnvironment:(id)arg1;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;
+ (BOOL)requiresScheme;

@end

