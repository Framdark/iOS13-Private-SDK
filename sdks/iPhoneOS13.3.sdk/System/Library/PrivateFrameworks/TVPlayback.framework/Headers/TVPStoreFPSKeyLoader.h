//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPSecureKeyDeliveryCoordinatorDelegate-Protocol.h>
#import <TVPlayback/TVPSecureKeyLoaderDelegate-Protocol.h>

@class NSError, NSMutableArray, NSNumber, NSString, NSURL, TVPPlaybackReportingEventCollection, TVPSecureKeyDeliveryCoordinator, TVPSecureKeyStandardLoader;
@protocol TVPStoreFPSKeyLoaderDelegate;

@interface TVPStoreFPSKeyLoader : NSObject <TVPSecureKeyDeliveryCoordinatorDelegate, TVPSecureKeyLoaderDelegate>
{
    BOOL _holdKeyResponses;
    BOOL _didSkipRentalCheckout;
    BOOL _includeGUID;
    BOOL _requiresExternalEntitlementCheck;
    NSObject<TVPStoreFPSKeyLoaderDelegate> *_delegate;
    NSError *_error;
    TVPPlaybackReportingEventCollection *_eventCollection;
    NSString *_serviceProviderID;
    NSNumber *_rentalID;
    TVPSecureKeyDeliveryCoordinator *_secureKeyDeliveryCoordinator;
    TVPSecureKeyStandardLoader *_secureKeyStandardLoader;
    NSMutableArray *_pendingKeyRequests;
    TVPSecureKeyStandardLoader *_fpsCertLoader;
    NSURL *_certificateDataURL;
    NSURL *_keyDataURL;
}

+ (void)preFetchFPSCertificate;
+ (void)initialize;
@property(copy, nonatomic) NSURL *keyDataURL; // @synthesize keyDataURL=_keyDataURL;
@property(copy, nonatomic) NSURL *certificateDataURL; // @synthesize certificateDataURL=_certificateDataURL;
@property(retain, nonatomic) TVPSecureKeyStandardLoader *fpsCertLoader; // @synthesize fpsCertLoader=_fpsCertLoader;
@property(retain, nonatomic) NSMutableArray *pendingKeyRequests; // @synthesize pendingKeyRequests=_pendingKeyRequests;
@property(retain, nonatomic) TVPSecureKeyStandardLoader *secureKeyStandardLoader; // @synthesize secureKeyStandardLoader=_secureKeyStandardLoader;
@property(retain, nonatomic) TVPSecureKeyDeliveryCoordinator *secureKeyDeliveryCoordinator; // @synthesize secureKeyDeliveryCoordinator=_secureKeyDeliveryCoordinator;
@property(retain, nonatomic) NSNumber *rentalID; // @synthesize rentalID=_rentalID;
@property(retain, nonatomic) NSString *serviceProviderID; // @synthesize serviceProviderID=_serviceProviderID;
@property(nonatomic) BOOL requiresExternalEntitlementCheck; // @synthesize requiresExternalEntitlementCheck=_requiresExternalEntitlementCheck;
@property(nonatomic) BOOL includeGUID; // @synthesize includeGUID=_includeGUID;
@property(nonatomic) BOOL didSkipRentalCheckout; // @synthesize didSkipRentalCheckout=_didSkipRentalCheckout;
@property(nonatomic) BOOL holdKeyResponses; // @synthesize holdKeyResponses=_holdKeyResponses;
@property(retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak NSObject<TVPStoreFPSKeyLoaderDelegate> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_failPendingKeyRequestsWithError:(id)arg1;
- (void)_preFetchFPSCertificate;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;
- (void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4;
- (void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;
- (void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
- (void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1 forKeyRequest:(id)arg2;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1;
- (void)sendStopRequest;
- (void)loadSecureKeyRequest:(id)arg1;
- (id)initWithCertificateDataURL:(id)arg1 keyDataURL:(id)arg2;

@end

