//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDataOriginProvenance, HDProfile;

@interface HDDataEntityInsertionContext : NSObject
{
    HDProfile *_profile;
    double _defaultCreationDate;
    BOOL _skipInsertionFilter;
    HDDataOriginProvenance *_provenance;
    double _creationDate;
}

@property(readonly, nonatomic) BOOL skipInsertionFilter; // @synthesize skipInsertionFilter=_skipInsertionFilter;
@property(readonly, nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) HDDataOriginProvenance *provenance; // @synthesize provenance=_provenance;
// - (void).cxx_destruct;
- (void)prepareObjectForInsertion:(id)arg1;
- (id)initWithProvenance:(id)arg1 creationDate:(double)arg2 skipInsertionFilter:(BOOL)arg3 profile:(id)arg4;

@end

