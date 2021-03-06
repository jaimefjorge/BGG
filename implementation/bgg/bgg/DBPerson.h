//
//  DBPerson.h
//  bgg
//
//  Created by João Caxaria on 5/17/11.
//  Copyright (c) 2011 Imaginary Factory. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class DBBoardGame, DBVideos;

@interface DBPerson : NSManagedObject {
@private
}
@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSString * username;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * updatedOwnedGames;
@property (nonatomic, retain) NSDate * updatedPlayedGames;
@property (nonatomic, retain) NSDate * updatedWishedGames;
@property (nonatomic, retain) NSSet* videos;
@property (nonatomic, retain) NSSet* playedGames;
@property (nonatomic, retain) NSSet* wishedGames;
@property (nonatomic, retain) NSSet* boardGamesArtist;
@property (nonatomic, retain) NSSet* ownedGames;
@property (nonatomic, retain) NSSet* boardGamesDesigner;

@end
