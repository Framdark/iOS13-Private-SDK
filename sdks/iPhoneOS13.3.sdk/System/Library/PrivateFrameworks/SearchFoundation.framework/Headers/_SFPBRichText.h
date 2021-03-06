//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBRichText-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat, _SFPBText;

@interface _SFPBRichText : PBCodable <_SFPBRichText, NSSecureCoding>
{
    _SFPBText *_text;
    _SFPBGraphicalFloat *_starRating;
    NSString *_contentAdvisory;
    NSArray *_icons;
    NSArray *_formattedTextPieces;
}

@property(copy, nonatomic) NSArray *formattedTextPieces; // @synthesize formattedTextPieces=_formattedTextPieces;
@property(copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(retain, nonatomic) _SFPBGraphicalFloat *starRating; // @synthesize starRating=_starRating;
@property(retain, nonatomic) _SFPBText *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)formattedTextPiecesAtIndex:(NSUInteger)arg1;
- (NSUInteger)formattedTextPiecesCount;
- (void)addFormattedTextPieces:(id)arg1;
- (void)clearFormattedTextPieces;
- (id)iconsAtIndex:(NSUInteger)arg1;
- (NSUInteger)iconsCount;
- (void)addIcons:(id)arg1;
- (void)clearIcons;
- (id)initWithFacade:(id)arg1;

@end

