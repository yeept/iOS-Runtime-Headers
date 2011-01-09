/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray;



@interface IMOfflinePeopleListGroup : IMPeopleListGroup 
{
    NSMutableArray *_visibleMembers;
    NSMutableArray *_dontShowMembers;
    NSInteger _changes;
    unsigned int _pendingClear : 1;
}


- (void)forgetIgnoredPresences;
- (id)visibleMembers;
- (void)_clearVisibleMembers;
- (BOOL)isChanging;
- (void)dontShowPresence:(id)arg1;
- (void)addPeopleListItem:(id)arg1;
- (void)removePeopleListItem:(id)arg1;
- (void)beginChanges;
- (NSInteger)numberOfItems;
- (id)init;
- (void)dealloc;
- (void)removeAllItems;
- (void)endChanges;

@end