/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSMutableArray;

@interface _MPUProtoBufUserActivityContext : PBCodable <NSCopying> {
    struct { 
        unsigned int originatorType : 1; 
        unsigned int originatorVersion : 1; 
    NSMutableArray *_containerItems;
    } _has;
    int _originatorType;
    int _originatorVersion;
}

@property(retain) NSMutableArray * containerItems;
@property BOOL hasOriginatorType;
@property BOOL hasOriginatorVersion;
@property int originatorType;
@property int originatorVersion;

- (void).cxx_destruct;
- (void)addContainerItems:(id)arg1;
- (void)clearContainerItems;
- (id)containerItems;
- (id)containerItemsAtIndex:(unsigned int)arg1;
- (unsigned int)containerItemsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasOriginatorType;
- (BOOL)hasOriginatorVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)originatorType;
- (int)originatorVersion;
- (BOOL)readFrom:(id)arg1;
- (void)setContainerItems:(id)arg1;
- (void)setHasOriginatorType:(BOOL)arg1;
- (void)setHasOriginatorVersion:(BOOL)arg1;
- (void)setOriginatorType:(int)arg1;
- (void)setOriginatorVersion:(int)arg1;
- (void)writeTo:(id)arg1;

@end