//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PLPhotoAnalysisGraphServiceProtocol-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisJobServiceProtocol-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisVisionServiceFaceProcessingProtocol-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisVisionServiceTaxonomyProtocol-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol, PLPhotoAnalysisGraphServiceProtocol, PLPhotoAnalysisVisionServiceTaxonomyProtocol, PLPhotoAnalysisVisionServiceFaceProcessingProtocol>
- (void)writeQALog:(NSString *)arg1;
- (void)notifyLibraryAvailableAtURL:(NSURL *)arg1;
- (void)cancelOperationsWithIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)dumpAnalysisStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end

