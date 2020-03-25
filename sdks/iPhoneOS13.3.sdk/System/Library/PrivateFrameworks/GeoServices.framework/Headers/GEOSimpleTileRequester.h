//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOTileRequester.h>

#import <GeoServices/GEOSimpleTileRequesterOperationDelegate-Protocol.h>
#import <GeoServices/GEOSimpleTileRequesterSubclass-Protocol.h>

@class GEODataSession, GEOTileKeyMap, GEOTileRequestBalancer, NSMutableArray, NSObject, geo_isolater;
@protocol OS_dispatch_queue, OS_os_activity, OS_voucher;

@interface GEOSimpleTileRequester : GEOTileRequester <GEOSimpleTileRequesterSubclass, GEOSimpleTileRequesterOperationDelegate>
{
    GEOTileRequestBalancer *_balancer;
    NSMutableArray *_running;
    NSMutableArray *_errors;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_voucher> *_voucher;
    GEODataSession *_dataSession;
    unsigned int _qos;
    struct GEOOnce_s _didStart;
    struct GEOOnce_s _didCallDelegate;
    BOOL _cancelled;
    BOOL _subclassImplementsTileEdition;
    BOOL _hasRemainingTileKeys;
    GEOTileKeyMap *_signpostIDs;
    GEOTileKeyMap *_tileLoaderCreateTimes;
    unsigned int _highestRunningOperationPriority;
    geo_isolater *_highestRunningOperationPriorityIsolation;
    BOOL _includeReasonHeader;
    BOOL _allowTLSSessionTicketUse;
    BOOL _allowTCPFastOpen;
}

@property(readonly, nonatomic) GEOTileRequestBalancer *balancer; // @synthesize balancer=_balancer;
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
// - (void).cxx_destruct;
- (id)operationsForKey:(const struct _GEOTileKey )arg1;
- (id)removeOperationsForKey:(const struct _GEOTileKey )arg1;
- (BOOL)_isRunningOperation:(id)arg1;
- (BOOL)_removeRunningOperation:(id)arg1;
- (void)_addRunningOperation:(id)arg1;
- (void)dealloc;
- (void)_reprioritizeKey:(struct _GEOTileKey)arg1 newPriority:(unsigned int)arg2;
- (void)reprioritizeKey:(const struct _GEOTileKey )arg1 newPriority:(unsigned int)arg2;
- (void)_cancelKey:(struct _GEOTileKey)arg1;
- (void)cancelKey:(const struct _GEOTileKey )arg1;
- (void)_cancel;
- (void)failedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;
- (void)finishedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(id)arg2;
- (void)_generateEndSignpostEventIfNecessary:(struct _GEOTileKey)arg1;
- (void)cancel;
- (void)_cancelAllRunningOperations;
- (void)_cleanup;
- (id)newRequestWithKind:(CDStruct_d1a7ebee)arg1 URL:(id)arg2 useProxyAuth:(BOOL)arg3 entityTag:(id)arg4 cachedData:(id)arg5 timeout:(double)arg6 requestCounterTicket:(id)arg7;
- (void)createRequest:(id )arg1 localizationRequest:(id )arg2 forKey:(const struct _GEOTileKey )arg3;
- (id)_createOperationsForTileKey:(const struct _GEOTileKey )arg1 priority:(unsigned int)arg2;
- (BOOL)_useProxyAuthForTileKey:(const struct _GEOTileKey )arg1;
- (void)_notifyDelegateDone:(id /* CDUnknownBlockType */)arg1;
- (void)_checkIfDone;
- (void)_didStartOperationsForAllTileKeys;
- (void)_updateRunningCountAndCheckIfDone;
- (void)_updateHighestRunningPriority;
- (void)start;
@property(readonly, nonatomic) unsigned int highestRunningOperationPriority;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 dataSession:(id)arg4;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (BOOL)shouldParticipateInBalancerScheduling;
- (void)didStartOperationsForAllTileKeys;
- (NSUInteger)estimatedNumberOfOperationsForTileKey:(struct _GEOTileKey)arg1;
- (void)createAndStartOperationsForTileKeys:(id)arg1;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey )arg1;
- (id)editionHeader;
- (id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
- (id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
- (BOOL)tileDataIsCacheableForTileKey:(const struct _GEOTileKey )arg1;
- (BOOL)needsLocalizationForKey:(const struct _GEOTileKey )arg1;
- (id)localizationURLForTileKey:(const struct _GEOTileKey )arg1;
- (id)newXPCDataRequestForTileKey:(const struct _GEOTileKey )arg1;
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey )arg1;
- (id)urlForTileKey:(const struct _GEOTileKey )arg1;
- (BOOL)downloadsDataToDisk;
- (BOOL)allowsCookies;
- (BOOL)shouldAllowEmptyDataForTileKey:(const struct _GEOTileKey )arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey )arg1;
- (id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)operationFailed:(id)arg1 error:(id)arg2;
- (void)_operationFinished:(id)arg1;
- (void)operationFinished:(id)arg1;

@end

