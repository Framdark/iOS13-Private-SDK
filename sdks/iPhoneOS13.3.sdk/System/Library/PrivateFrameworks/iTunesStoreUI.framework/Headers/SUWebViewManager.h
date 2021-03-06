//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/SUScriptInterfaceDelegate-Protocol.h>
#import <iTunesStoreUI/WebFrameLoadDelegate-Protocol.h>
#import <iTunesStoreUI/WebPolicyDelegate-Protocol.h>
#import <iTunesStoreUI/WebResourceLoadDelegate-Protocol.h>
#import <iTunesStoreUI/WebUIDelegate-Protocol.h>

@class ACAccount, ISURLRequestPerformance, NSDictionary, NSLock, NSMapTable, NSMutableSet, NSSet, SSAuthenticationContext, SUClientInterface, SUScriptWindowContext, SUWebScriptReloadContext, UIWebView;
@protocol SUWebViewManagerDelegate;

@interface SUWebViewManager : NSObject <SUScriptInterfaceDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate, UIWebViewDelegate>
{
    BOOL _initialLoadReported;
    SSAuthenticationContext *_authenticationContext;
    SUClientInterface *_clientInterface;
    id <SUWebViewManagerDelegate> _delegate;
    ISURLRequestPerformance *_initialRequestPerformance;
    NSLock *_lock;
    id _originalFrameLoadDelegate;
    id _originalPolicyDelegate;
    id _originalResourceLoadDelegate;
    id _originalUIDelegate;
    SUWebScriptReloadContext *_pendingWebScriptReloadContext;
    NSMutableSet *_requireCellularURLs;
    NSMapTable *_scriptInterfaces;
    SUScriptWindowContext *_scriptWindowContext;
    BOOL _shouldSignRequests;
    NSSet *_suppressCookiesHosts;
    long long _usingNetworkCount;
    struct __CFSet _webFramesPendingInitialRequest;
    UIWebView *_webView;
    ACAccount *_account;
    NSDictionary *_tidHeaders;
}

+ (id)defaultLocalStoragePath;
@property(retain, nonatomic) NSDictionary *tidHeaders; // @synthesize tidHeaders=_tidHeaders;
@property(readonly, nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) BOOL shouldSignRequests; // @synthesize shouldSignRequests=_shouldSignRequests;
@property(retain, nonatomic) SUScriptWindowContext *scriptWindowContext; // @synthesize scriptWindowContext=_scriptWindowContext;
@property(retain, nonatomic) id originalUIDelegate; // @synthesize originalUIDelegate=_originalUIDelegate;
@property(retain, nonatomic) id originalResourceLoadDelegate; // @synthesize originalResourceLoadDelegate=_originalResourceLoadDelegate;
@property(retain, nonatomic) id originalPolicyDelegate; // @synthesize originalPolicyDelegate=_originalPolicyDelegate;
@property(retain, nonatomic) id originalFrameLoadDelegate; // @synthesize originalFrameLoadDelegate=_originalFrameLoadDelegate;
@property(retain, nonatomic) ISURLRequestPerformance *initialRequestPerformance; // @synthesize initialRequestPerformance=_initialRequestPerformance;
@property(nonatomic) id <SUWebViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_userIdentifier;
- (BOOL)_presentModalAlertWithMessage:(id)arg1 includingCancelButton:(BOOL)arg2 configurationHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_enumerateScriptInterfacesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_endUsingNetwork;
- (id)_delegate;
- (void)_cancelUsingNetwork;
- (void)_beginUsingNetwork;
- (id)_locateStorePageViewController;
- (void)_requestWebScriptReloadWithContext:(id)arg1;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 exceptionWasRaised:(id)arg2 sourceId:(long long)arg3 line:(int)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 failedToParseSource:(id)arg2 baseLineNumber:(NSUInteger)arg3 fromURL:(id)arg4 withError:(id)arg5 forWebFrame:(id)arg6;
- (void)webView:(id)arg1 didParseSource:(id)arg2 fromURL:(id)arg3 sourceId:(long long)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)webView:(id)arg1 documentViewDidSetFrame:(CGRect)arg2;
- (void)scriptInterface:(id)arg1 requireCellularForResourceWithURL:(id)arg2;
- (id)performanceMetricsForScriptInterface:(id)arg1;
- (id)parentViewControllerForScriptInterface:(id)arg1;
- (id)DOMElementForScriptInterface:(id)arg1 element:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)disconnectFromWebView;
- (void)connectToWebView:(id)arg1;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;
- (id)init;

@end

