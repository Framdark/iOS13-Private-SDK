//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, SGDuplicateKey, SGExtractionInfo, SGRecordId;

@interface SGContactDetail : NSObject <NSCopying>
{
    NSString *_normalizedValue;
    SGRecordId *_recordId;
    NSUInteger _type;
    NSString *_value;
    NSString *_label;
    SGExtractionInfo *_extractionInfo;
    NSString *_sourceKey;
    NSString *_context;
    SGDuplicateKey *_duplicateKey;
}

+ (id)contactDetailFromEntity:(id)arg1;
+ (id)contactDetail:(id)arg1 label:(id)arg2 type:(NSUInteger)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionInfo:(id)arg8;
@property(readonly, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property(readonly, nonatomic) SGExtractionInfo *extractionInfo; // @synthesize extractionInfo=_extractionInfo;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqualToContactDetail:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)loadOrigin:(id)arg1;
@property(readonly, nonatomic) NSString *normalizedValue;
- (id)initWithValue:(id)arg1 label:(id)arg2 type:(NSUInteger)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionInfo:(id)arg8;
// - (id)copyWithZone:(_NSZone )arg1;

@end

