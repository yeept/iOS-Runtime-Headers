/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingDistributionRuleEntry : PLAccountingRuleEntry

@property (nonatomic, readonly) NSNumber *distributionID;
@property (nonatomic, readonly) NSNumber *nodeID;
@property (nonatomic, readonly) NSNumber *rootNodeID;

+ (id)entryKey;
+ (void)load;

- (id)description;
- (id)distributionID;
- (unsigned int)hash;
- (id)initWithNodeID:(id)arg1 withRootNodeID:(id)arg2 withDistributionID:(id)arg3 withEntryDate:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)nodeID;
- (id)rootNodeID;

@end
