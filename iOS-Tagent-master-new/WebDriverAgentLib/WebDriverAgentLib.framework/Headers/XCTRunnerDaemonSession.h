//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCTestManager_TestsInterface-Protocol.h"
#import "XCEventGenerator.h"
#import <WebDriverAgentLib/CDStructures.h>
#import <UIKit/UIKit.h>

@class NSMutableDictionary, NSXPCConnection, XCSynthesizedEventRecord;
@protocol XCTUIApplicationMonitor, XCTAXClient, XCTestManager_ManagerInterface;

// iOS since 10.3
@interface XCTRunnerDaemonSession : NSObject <XCTestManager_TestsInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <XCTUIApplicationMonitor> _applicationMonitor;
    id <XCTAXClient> _accessibilityClient;
    NSXPCConnection *_connection;
    unsigned long long _daemonProtocolVersion;
    NSMutableDictionary *_invalidationHandlers;
}
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property id <XCTAXClient> accessibilityClient; // @synthesize accessibilityClient=_accessibilityClient;
@property id <XCTUIApplicationMonitor> applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(retain) NSMutableDictionary *invalidationHandlers; // @synthesize invalidationHandlers=_invalidationHandlers;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) BOOL useLegacyEventCoordinateTransformationPath;
@property unsigned long long daemonProtocolVersion;
@property(readonly) id <XCTestManager_ManagerInterface> daemonProxy;

+ (instancetype)sharedSession;

- (void)injectVoiceRecognitionAudioInputPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)injectAssistantRecognitionStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSiriUIRequestWithAudioFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSiriUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDTServiceHubConnectionWithReply:(CDUnknownBlockType)arg1;
- (void)enableFauxCollectionViewCells:(CDUnknownBlockType)arg1;
- (void)loadAccessibilityWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAXTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestScreenshotWithReply:(CDUnknownBlockType)arg1;
- (void)sendString:(id)arg1 maximumFrequency:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDeviceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDeviceEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synthesizeEvent:(XCSynthesizedEventRecord *)arg1 completion:(void (^)(NSError *))arg2;
- (void)requestElementAtPoint:(CGPoint)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchParameterizedAttributeForElement:(id)arg1 attribute:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)fetchAttributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(void (^)(XCElementSnapshot *, NSError *))arg4;
- (void)terminateApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAccessibilityAction:(int)arg1 onElement:(id)arg2 value:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)unregisterForAccessibilityNotification:(int)arg1 registrationToken:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)registerForAccessibilityNotification:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)launchApplicationWithBundleID:(id)arg1 arguments:(id)arg2 environment:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startMonitoringApplicationWithBundleID:(id)arg1;
- (void)requestBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestAutomationSessionForTestTargetWithPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestIDEConnectionSocketForSessionIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_XCT_receivedAccessibilityNotification:(int)arg1 withPayload:(id)arg2;
- (void)_XCT_applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
- (void)unregisterInvalidationHandlerWithToken:(id)arg1;
- (id)registerInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)_reportInvalidation;
- (id)initWithConnection:(id)arg1;

@end
