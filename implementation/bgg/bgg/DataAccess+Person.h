//
//  DataAccess+BoardGame.h
//  bgg
//
//  Created by João Caxaria on 4/21/11.
//  Copyright 2011 Imaginary Factory. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBPerson.h"

@interface DataAccess (Person)

-(DBPerson*) createPerson;
-(DBPerson*) getCreatePersonById:(NSString*) mid;
-(DBPerson*) getPersonById:(NSString*) mid;
-(DBPerson*) getCreatePersonByUsername:(NSString*) username;
-(DBPerson*) getPersonByUsername:(NSString*) username;

@end
