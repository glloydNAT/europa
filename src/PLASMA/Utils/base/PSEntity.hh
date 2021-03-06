#ifndef PSENTITY_H_
#define PSENTITY_H_

#include <string>

namespace EUROPA {
typedef int PSEntityKey;

class PSEntity
{
 public:
  virtual ~PSEntity() {}

  virtual PSEntityKey getEntityKey() const = 0;
  virtual const std::string& getEntityName() const = 0;
  virtual const std::string& getEntityType() const = 0;
  virtual std::string toString() const = 0;
  virtual std::string toLongString() const = 0;
};

}

#endif /* PSENTITY_H_ */
