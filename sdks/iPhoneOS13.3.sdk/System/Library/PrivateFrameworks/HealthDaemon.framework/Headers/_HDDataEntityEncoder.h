//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDEntityEncoder.h>

@class HDDataProvenanceCache, HDMetadataValueStatement;

@interface _HDDataEntityEncoder : HDEntityEncoder
{
    HDMetadataValueStatement *_metadataValueStatement;
    HDDataProvenanceCache *_dataProvenanceCache;
    id /* CDUnknownBlockType */ _metadataKeyFilter;
    BOOL _includeAutomaticTimeZones;
}

// - (void).cxx_destruct;
- (void)finish;
- (id)_copyBaseMetadataForRow:(struct HDSQLiteRow )arg1;
- (BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow )arg3 error:(id )arg4;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow )arg2 error:(id )arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow )arg2 error:(id )arg3;
- (id)orderedProperties;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(id /* CDUnknownBlockType */)arg6;

@end

